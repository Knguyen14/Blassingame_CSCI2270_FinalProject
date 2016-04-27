Welcome to my project! 

Project Summary:
My program allows you to manipulate a hash table and a BST using movie titles and years. I used a lot of some of the assignments we've done for this class, and modified them to work with each other. The menus in the program are pretty self-explanatory, especially if you've done the assignments.

How to Run:
1. Go to my GitHub (https://github.com/RossBlassingame/Blassingame_CSCI2270_FinalProject) in your VM's browser, 2. Click on "Download ZIP", 3. Once it's done downloading, go to the folder, 4. Open/create a folder in your VM where you can extract my project to, 5. in the downloaded ZIP folder, press ctrl+a, then click and drag all of the files into the file you opened/created in your VM, 6. open codeblocks, 7. go to file->open and navigate to and open this project, 8. you may need to add the two other files manually (class.cpp and class.h -- main.cpp is the main function). you can do this in codeblocks: project->add files, then navigate to class.cpp, and do the same for class.h, 9. go to project->build options, then go to "Search Directories", then click on "Add", then navigate to the "include" folder in my project, and hit ok, 10. you should be able to run it now! That's the hard part -- it's pretty simple once you get it running. Enter the number that corresponds with the menu item that you want to pick (for example, if you enter '1', you'll insert a movie into the hash table. It will prompt you for the title and year, which you should enter).

Dependencies:
None (I think?)

System Requirements:
None (Runs on VM?)

Group Members:
Ross Blassingame

Contributors:

Open issues/bugs:
If you add a movie to the tree and then try to delete it, it seg faults. For example, enter '5', 'a', '1', '9', 'a', and you should get a seg fault.

