<div align="center">

# Contributing Guidelines 📜
</div>

## HackFest-22 🚀
***
<p>If you are new to open-source and would like to make your first contribution, please participate in this project.<p>
<p>Follow the steps below :- </p>

_If you don't have GIT installed, [GIT Tutorial](https://github.com/HITK-2025/first-contribution/blob/main/installation.md)_

***
## Git Setup Guide
***
### To initialise Git, write
```bash
git init
```

### 1. Configure your local Git
---
```bash
git config --global user.name "github username"
```

```bash
git config --global user.email "email address"
```

### 2.  Go to the first-contribution repository and Fork it.
---
* The term fork refers to a rough copy of a repository. When you fork a repository, you are able to test and debug changes without affecting the original project. In addition to proposing changes to resolve bugs, forking is also used excessively for this purpose.

* Click on Code Button and copy the URL of your forked Repository

### 3. Switch to your Git bash window, and enter the following :
---
* Clone the Forked project on your local system 

```bash
git clone https://github.com/shubhajeet1207/Hackfest-22.git
```


* Make the changes

Now open CONTRIBUTORS.md in a text editor and add your name and your github link below the exisiting one in given format
```bash
   <td align="center">
       <img src="Image_link_of_your_Github" width="150px" alt="HacktoberFest'22" />
      <br/>
      Your Name
      <a href="https://github.com/github_profile_link">Github</a>
    </td>
```
### 4. Choose your Stack
---
* Web(HTML, CSS, JS)
* Python GUI Application(tkinter, Pygame, PyQT)
* Python Automation Tool
* Data Structure & Algorithms
* Designs/Sketches<br/>
**Before pushing your files, please ensure that they are added to the following folders. And follow the PR templates mentioned in the respective folders.**

### 5. Creating a Pull request
---
#### Create a branch

* A branch is designed to encapsulate a group of changes. These changes might be thrown away, entirely rewritten or in the majority of cases they’ll be promoted into the main history of the codebase - via a merge.


* For creating a branch

```bash
git branch branch_name
```

* Checkout to the created branch

```bash
git checkout branch_name
```


* Now add the files using the git command

```bash
git add .
```
* Commit the changes to the local project

```bash
git commit -m "Added my data"
```

* Push the changes to your forked github repo
```bash
git push origin branch_name
```

### 6. Final Steps
---
* Open your forked git repository, you will get a message like as shown in the figure (if not then refresh the page).

**Click on "Contribute 👆🏻**


* Now click on "Open pull request"

* Click on "Create pull request"

* Click on "Create pull request"
 You may add a Comment to your Pull Request

**Now, you can see your data into Contributors.md**
After your Pull Request get accepted you can see your name on 
[HackFest'22](https://hacktoberfest22.netlify.app)
