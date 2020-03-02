## Example C++ Hello World using Bitbucket

This repository provides an example of using Bitbucket to manage source code

---

## Cloning repository
Next we will clone the repository to a local folder. Enter the following commands from the console to pull down the latest version of code.
```console
git clone https://johncobb@bitbucket.org/johncobb/helloworld.git
```

## Commiting changes

You’ll start by editing this README file to learn how to edit a file in Bitbucket.
```console
git add .
git commit -m "comment describing changes"
git push origin master
```

## Branching

1. Branching allows us to work independently of master
2. Branching makes it easy to merge workflows
3. Branching provides an isolated environment for you to work from
```console
# query current branch
git branch

# create a new branch
git checkout -b newbranch

# switch back to master branch
git checkout master
```
