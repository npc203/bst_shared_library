# bst_shared_library

### Some intresting compiler flags
- -L linking shared object on compile time?
- -I link header files from other dirs
- -Wl,rpath dynamic link libs on runtime
- -Wl,R ????
### Compiling the rpm library
1. Place the spec file in your rpmbuild/SPECS
2. Run `make gentar` on the root of the repo, which would generate a tar file
3. Paste the tar file on rpmbuild/SOURCES
4. `rpmbuild  -ba -v rpmbuild/SPECS/bst.spec` to build it