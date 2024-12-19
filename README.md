# Cpp Training

## Prerequisites

```shell
# install

sudo apt-get update
sudo apt-get upgrade
 
sudo apt-get install make
sudo apt-get install gdb
sudo apt-get install gcc
sudo apt-get install g++
sudo apt-get install git
sudo apt-get install cmake

# check
gdb --version
gcc --version
g++ --version
```

## Structure

- book
- udemy-tooling
- vscode-configuration

## GIT

Create .gitignore with: <https://www.toptal.com/developers/gitignore>

## Run and Debug

- use CLI, e.g.:
  - `g++ TernaryOperator.cc -o main`
  - `./main`
- Use makefile:
  - `make build` and `make run`, afterwards `make clean`
- Cleanup remains:
  - Windows `.\cleanup.ps`
  - Linux `/home/comp/dev/cpp-training/cleanup.sh`

# Remarks

- Compiler FLags [Link](https://www.rapidtables.com/code/linux/gcc.html)
