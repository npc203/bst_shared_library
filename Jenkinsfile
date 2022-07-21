pipeline
{
    agent any
    stages
    {
        stage('build')
        {
            steps {
                echo 'starting make build'
                sh 'make build'
            }
        }
    }
    post {
        always {
            archiveArtifacts artifacts: 'compiled/*'
        }

        success {
                slackSend message: "Build deployed successfully - ${env.JOB_NAME} ${env.BUILD_NUMBER} (<${env.BUILD_URL}|Open>)"
        }

        failure {
                slackSend failOnError:true, message:"Build failed  - ${env.JOB_NAME} ${env.BUILD_NUMBER} (<${env.BUILD_URL}|Open>)"
        }
    }
}