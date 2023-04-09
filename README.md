# buck2Lab


## Prerequisite

https://github.com/facebook/buck2/blob/main/docs/getting_started.md#installing-buck2

> **Warning**
> Install LLVM i.e. clang & lld: `sudo apt install clang lld`

Otherwise we have the following error:

```sh
buck2 build //...
Action failed: root//:print (cxx_link lib_print.so)
Local command returned non-zero exit code 1
Reproduce locally: `clang++ "-fuse-ld=lld" -o buck-out/v2/gen/root/524f8da68ea2a374/__print__/lib_print.so @buck-out/v2/gen/root/524f8da68ea2a374/__print__/lib_print.so.linker.argsfile`
stdout:
stderr:
clang: error: invalid linker name in argument '-fuse-ld=lld'
Action failed: root//:main (cxx_link_executable)
Local command returned non-zero exit code 1
Reproduce locally: `clang++ "-fuse-ld=lld" -o buck-out/v2/gen/root/524f8da68ea2a374/__main__/main @buck-out/v2/gen/root/524f8da68ea2a374/__main__/main.linker.argsfile`
stdout:
stderr:
clang: error: invalid linker name in argument '-fuse-ld=lld'
Build ID: eeb43c17-9521-4651-9786-bd1dff668ea6
Jobs completed: 4. Time elapsed: 0.2s. Cache hits: 0%. Commands: 2 (cached: 0, remote: 0, local: 2)
BUILD FAILED
Failed to build 'root//:main (prelude//platforms:default#524f8da68ea2a374)'
Failed to build 'root//:print (prelude//platforms:default#524f8da68ea2a374)'
```
