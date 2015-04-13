metaSMT is a wrapper around various SMT or SMT-like solvers.
This means you are able to program against this library and use any
of the implemented solvers.

# Building metaSMT

0. Preparations
1. Install solver backends
2. Configure metaSMT
3. Build and test


# 0. Preparation 

You need: a C/C++ Compiler (tested: *gcc* or recent *clang*), *make*, *cmake*, *wget*,
most of them you can install from your package manager.

If you want to use the SMT-LIB2 file backend, please ensure that you have
installed the *zlib* and *bzip2* development packages (*zlib1g-*dev, *libbz2-dev* on
Debian-based systems).  Otherwise boost will be build without *iostreams* and you
will get linking errors. This is not required to use metaSMT in general.

In the same way the python bindings of metaSMT require the boost python
libraries which will fail to build if the python development package is not
installed (*python-dev* on Debian-based systems).

## 1. The `bootstrap.sh` script

The `bootstrap.sh` script provided by metaSMT can automatically download and
install dependencies needed by metaSMT and setup a metaSMT build folder. You
may require subversion, or git to be installed.

Calling `./bootstrap.sh` without arguments will display a complete list of
options. It is recommended to call

 ```
./bootstrap.sh --deps deps/ --free     -m RELEASE build/
```

or

```
./bootstrap.sh --deps deps/ --non-free -m RELEASE build/
```

to download and build all dependencies in the "deps" folder and configure a
metaSMT build in the "build" folder. The source folder can be shared for
different build folders. The parameters --free and --non-free select which
set of backend tools to download and include in the build, you need to select
which you want.

Please note that some free and non-free backends use licenses which
are not compatible (e.g. Boolector: GPL, SWORD and Z3: Proprietary).
Check the compatibility of the selected backends with your own projects
licence.

If your system does not provide a recent version of *cmake*, *bootstrap.sh* can
build a local version when provided with `--cmake`.

## 2. Build metaSMT

An already configured `build` folder can be build using

```
   cd build
   make
```

and installed (optional, only when used as external library) using

  ```make install```

If no install folder is given to bootstrap.sh by default metaSMT is installed
to the build/root/ folder.

Please also note that metaSMT by default compiles an excessive test suite for
all available backends. After building it can be called with `make test`.
Note that some Tests are expected to fail, e.g. due to timeouts, backend
restrictions or work in progress (new) functionality.


Building the test suite can take a lot of time. If you want to disable
building the tests you can  pass `-DmetaSMT_ENABLE_TESTS=off` to the bootstrap
script or call

  ```cmake ./ -DmetaSMT_ENABLE_TESTS=off```

in the build folder or by setting the option using `ccmake .` or
`cmake-gui .`.

## 3. Using metaSMT

The toolbox folder provides an easy way to use metaSMT in your own code.
Just create a subfolder and start writing a program. All C++ code will
automatically build into an executable. The folder contains a separate README
and some examples using metaSMT.

## 4. Documentation

In addition to the examples, the API documentation is located in the doc/html/
folder. Simply open the doc/html/index.html file in your favorite browser.
Note: The documentation is not yet complete. Only selected modules are
currently documented.

##  5. Python

When you call "make install" metaSMT will place a python folder into the
install folder (build/root by default).

The folder will contain a pymetaSMT wrapper script to ease executing custom
python scripts and an example folder.

