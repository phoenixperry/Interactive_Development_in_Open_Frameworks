#Installing all of the software you need for this class 

You will need 3 pieces of software:
Open Frameworks, an IDE for your computer (Visual Studio or XCode) and github.  


##1. Open Frameworks 
Open frameworks is an open source creative coding framework. It standardises many c++ libraries' syntax, such as quicktime and openCV, into a common format that's easy to read and understand.

What can you make in open frameworks and why would you want to learn it? 
![](/images/ofInspiration.png?raw=true)

<http://vimeo.com/74124094>
 
###Windows: 
1. Download Open Frameworks for windows:
<http://openframeworks.cc/download/>
(This is for 0.8 - should be the same as 0.84. Email me issues please! I'll work on this more later but I wanted to get something up today!)

2. Follow the open frameworks installation for visual studio guide here: 
http://www.instructables.com/id/Getting-OpenFrameworks-080-to-work-on-Windows/step2/Fire-up-Visual-Studio-2012-Any-version-above-Expre/


###Mac: 
1. Download Open Frameworks for windows: 
<http://openframeworks.cc/download/>

2. Follow the open frameworks installation for mac 
<http://openframeworks.cc/setup/xcode/>


##2. Github
Github is a version control system that allows developers to save versions of their code and also to share their code with others. 

Mac
<https://mac.github.com/>

Windows 
<https://windows.github.com/> 

You must create a github repository in your work in this class. 

Let's learn a bit about github. 

####Vocabulary 
Words People Use When They Talk About Git

In this class, there are a few words I’m going to use repeatedly, none of which I'd heard before I started learning. Here’s the big ones:

####Command Line: 
The computer program we use to input Git commands outside the github application. On a Mac, it’s called Terminal. On a PC, it’s a non-native program that you download when you download Git for the first time (we’ll do that in the next section). In both cases, you type text-based commands, known as prompts, into the screen, instead of using a mouse.

####Repository: (a repo) 
A directory or storage space where your projects can live. Sometimes GitHub users shorten this to “repo.” It can be local to a folder on your computer, or it can be a storage space on GitHub or another online host. You can keep code files, text files, image files, you name it, inside a repository.

####Version Control: 
Basically, the purpose Git was designed to serve. When you have a Microsoft Word file, you either overwrite every saved file with a new save, or you save multiple versions. With Git, you don’t have to. It keeps “snapshots” of every point in time in the project’s history, so you can never lose or overwrite it.

####Commit: 
This is the command that gives Git its power. When you commit, you are taking a “snapshot” of your repository at that point in time, giving you a checkpoint to which you can reevaluate or restore your project to any previous state.


This definitions are from a tutorial that we aren't going to cover just now but feel free to check it out and know we will get there.  <http://readwrite.com/2013/09/30/understanding-github-a-journey-for-beginners-part-1> 

Here are a few more! 

####Push: 
This means you are going to save your code and local commits up to the internet. You "push" your code to github. This happens when you press the sync or sync and commit button in the Github application 

####Pull: 
Pulling code means you update your local codebase to match what is currently up in the same repository living on github.com. Usually, this will be someone else's repo. For example you will want to often pull the class repository to keep your local copies of my repository up-to-date. This will give you access to the code that I write for the class. 


####Sync: 
If you sync from the github application, it will first pull the code from the repo on github.com (this is important if you are co-authoring a piece of code with a team) and then push your local commits to the site. 


## Invisible files and github 
Git and github are actually 2 totally different things. Git is a version control system for developers that can live on any server. Github is a website service that stores millions of gits in a public place. Aka git is the tool and github is actually the application, service and website. 

Github and your local git are linked and the link is established in an invisible .git folder. If you quit the github application and move a repositories invisible. .git file, when you restart the the Github applicaiton, it will ask you to locate the new folder on your computer for the repo and relink everything for you. 
![](images/locate.png)

This is an easy way to move a git repo if you need to. However, you'll need to show invisible files to see your .git folder. 
![](images/invisible.png)

####On a Mac 

1. Open Finder

2. Open the Utilities folder

3. Open a terminal window

4. Copy and paste the following line in:

`SUDO defaults write com.apple.Finder AppleShowAllFiles YES; killall Finder`

The do the follow 

5. Press return
6. Enter your administrator password when prompted
7. Press return

You should find the finder window will disappear, along with the icons on your desktop. However, if you now launch a new finder instance you will now be able to see any hidden files or folders. Once you are done, perform the steps above however, replace the terminal command in step 4 with:

`SUDO defaults write com.apple.Finder AppleShowAllFiles NO; killall Finder`

If the above is not working for you, you may want to try switching YES/NO to TRUE/FALSE .. Beware that this is case-sensitive!

defaults write com.apple.Finder AppleShowAllFiles TRUE

####On windows 
Show hidden files

Here's how to display hidden files and folders.

Open Folder Options by clicking the Start button Picture of the Start button, clicking Control Panel, clicking Appearance and Personalization, and then clicking Folder Options.


Click the View tab.


Under Advanced settings, click Show hidden files, folders, and drives, and then click OK.

####Common problems 

###Mac 
On a mac 






