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
            archiveArtifacts artifacts: 'compiled/*', fingerprint: true
        }
    }
}