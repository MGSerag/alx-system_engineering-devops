
[1]+  Stopped                 emacs 101-quote.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# fg
emacs 101-quote.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Add the specified files to git
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git add 2-assembler 3-name 4-puts.c 100-intel 101-quote.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world#
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Commit the changes
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git commit -m "Add 2-assembler, 3-name, 4-puts.c, 100-intel, 101-
# Push the changes to the repository
[main 3d169c1] Add 2-assembler, 3-name, 4-puts.c, 100-intel, 101-quote.c
 5 files changed, 14 insertions(+), 6 deletions(-)
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world#
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Push the changes to the repository
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git push
Enumerating objects: 15, done.
Counting objects: 100% (15/15), done.
Delta compression using up to 2 threads
Compressing objects: 100% (6/6), done.
Writing objects: 100% (8/8), 998 bytes | 998.00 KiB/s, done.
Total 8 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/MGSerag/alx-low_level_programming.git
   39eeb66..3d169c1  main -> main
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# emacs 101-quote.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# emacs 100-intel
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# emacs 4-puts.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# ls
0-preprocessor  101-quote    1-compiler   3-name    5-printf    6-size    Betty  main.c  main.s
100-intel       101-quote.c  2-assembler  4-puts.c  5-printf.c  6-size.c  c      main.o  README.md
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Copy main.c to 0-main.c, 1-main.c, and 2-main.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# cp main.c 0-main.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# cp main.c 1-main.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# cp main.c 2-main.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world#
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Add the new files to git
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git add 0-main.c 1-main.c 2-main.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world#
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Commit the changes
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git commit -m "Add 0-main.c, 1-main.c, and 2-main.c copied from m
  [main b764183] Add 0-main.c, 1-main.c, and 2-main.c copied from main.c
  3 files changed, 39 insertions(+)
   create mode 100644 0x00-hello_world/0-main.c
   create mode 100644 0x00-hello_world/1-main.c
   create mode 100644 0x00-hello_world/2-main.c
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world#
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Push the changes to the repository
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git push
  Enumerating objects: 5, done.
  Counting objects: 100% (5/5), done.
  Delta compression using up to 2 threads
  Compressing objects: 100% (3/3), done.
  Writing objects: 100% (3/3), 415 bytes | 415.00 KiB/s, done.
  Total 3 (delta 1), reused 0 (delta 0)
  remote: Resolving deltas: 100% (1/1), completed with 1 local object.
  To https://github.com/MGSerag/alx-low_level_programming.git
     3d169c1..b764183  main -> main
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# emacs 101-quote.c
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Add the 101-quote.c file to git
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git add 101-quote.c
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world#
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Commit the changes
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git commit -m "Push 101-quote.c again"
  [main b39569f] Push 101-quote.c again
  1 file changed, 2 insertions(+), 2 deletions(-)
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world#
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Push the changes to the repository
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git push
  Enumerating objects: 7, done.
  Counting objects: 100% (7/7), done.
  Delta compression using up to 2 threads
  Compressing objects: 100% (4/4), done.
  Writing objects: 100% (4/4), 452 bytes | 452.00 KiB/s, done.
  Total 4 (delta 2), reused 0 (delta 0)
  remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
  To https://github.com/MGSerag/alx-low_level_programming.git
     b764183..b39569f  main -> main
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# emacs 101-quote.c
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# emacs 101-quote.c
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# emacs 101-quote.c
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Add the 101-quote.c file to git
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git add 101-quote.c
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world#
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Commit the changes
  root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git commit -m "Update 101-quote.c to concatenate two string parts
[main 3f14cad] Update 101-quote.c to concatenate two string parts for the message
 1 file changed, 5 insertions(+), 5 deletions(-)
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world#
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Push the changes to the repository
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 645 bytes | 645.00 KiB/s, done.
Total 4 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/MGSerag/alx-low_level_programming.git
   b39569f..3f14cad  main -> main
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# emacs 4-puts.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Add the 4-puts.c file to git
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git add 4-puts.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world#
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Commit the changes
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git commit -m "Add 4-puts.c"
[main 2f7c690] Add 4-puts.c
 1 file changed, 1 insertion(+), 3 deletions(-)
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world#
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Push the changes to the repository
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 456 bytes | 456.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/MGSerag/alx-low_level_programming.git
   3f14cad..2f7c690  main -> main
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# emacs 0-preprocessor
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Set the CFILE variable
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# export CFILE=0-main.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world#
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Run the preprocessor script
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# ./0-preprocessor
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# tail c




# 9 "0-main.c"
int main(void)
{
  printf("Hello, World!\n")
return(0);
}
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# emacs 0-main.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# emacs main.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# emacs 2-main.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# emacs 1-main.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Make the script executable
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# chmod +x 0-preprocessor
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world#
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Add the files to git
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git add 0-preprocessor 0-main.c 1-main.c 2-main.c main.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world#
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Commit the changes
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git commit -m "Add 0-main.c, 1-main.c, 2-main.c, main.c and updatile named c"
[main 1a64120] Add 0-main.c, 1-main.c, 2-main.c, main.c and update 0-preprocessor script to store output in a file named c
 5 files changed, 5 insertions(+), 5 deletions(-)
 mode change 100644 => 100755 0x00-hello_world/0-preprocessor
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world#
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Push the changes to the repository
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git push
Enumerating objects: 9, done.
Counting objects: 100% (9/9), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (5/5), 595 bytes | 595.00 KiB/s, done.
Total 5 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/MGSerag/alx-low_level_programming.git
   2f7c690..1a64120  main -> main
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# emacs 101-quote.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# emacs 4-puts.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Add the 4-puts.c file to git
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git add 4-puts.c
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world#
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Commit the changes
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git commit -m "Add 4-puts.c"
[main c5be7fd] Add 4-puts.c
 1 file changed, 1 insertion(+), 1 deletion(-)
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world#
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# # Push the changes to the repository
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 430 bytes | 430.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/MGSerag/alx-low_level_programming.git
   1a64120..c5be7fd  main -> main
root@0423baf463ba:/alx-low_level_programming/0x00-hello_world# cd ..
root@0423baf463ba:/alx-low_level_programming# cd ..
root@0423baf463ba:/# ls
alx-low_level_programming  alx-system_engineering-devops  boot  etc   lib    lib64   media  opt   root  sbin  sys  usr
alx-pre_course             bin                            dev   home  lib32  libx32  mnt    proc  run   srv   tmp  var
root@0423baf463ba:/# cd alx-system_engineering-devops
root@0423baf463ba:/alx-system_engineering-devops# ls
alx-system_engineering-devops
root@0423baf463ba:/alx-system_engineering-devops# cd alx-system_engineering-devops
root@0423baf463ba:/alx-system_engineering-devops/alx-system_engineering-devops# ls
0x00-shell_basics
root@0423baf463ba:/alx-system_engineering-devops/alx-system_engineering-devops# cd ..
root@0423baf463ba:/alx-system_engineering-devops# cd ..
root@0423baf463ba:/# # Remove the directory and its contents
root@0423baf463ba:/# rm -rf alx-system_engineering-devops
root@0423baf463ba:/#
root@0423baf463ba:/# # Commit the removal to git
root@0423baf463ba:/# git add -u alx-system_engineering-devops
fatal: not a git repository (or any of the parent directories): .git
root@0423baf463ba:/# git commit -m "Remove directory alx-system_engineering-devops"
fatal: not a git repository (or any of the parent directories): .git
root@0423baf463ba:/#
root@0423baf463ba:/# # Push the changes to the repository
root@0423baf463ba:/# git push
fatal: not a git repository (or any of the parent directories): .git
root@0423baf463ba:/# ls
alx-low_level_programming  alx-pre_course  bin  boot  dev  etc  home  lib  lib32  lib64  libx32  media  mnt  opt  proc  root  ru
root@0423baf463ba:/# git clone https://github.com/MGSerag/alx-system_engineering-devops.git
Cloning into 'alx-system_engineering-devops'...




remote: Enumerating objects: 71, done.
remote: Counting objects: 100% (71/71), done.
remote: Compressing objects: 100% (48/48), done.
remote: Total 71 (delta 19), reused 57 (delta 5), pack-reused 0
Unpacking objects: 100% (71/71), 6.29 KiB | 35.00 KiB/s, done.
root@0423baf463ba:/#
root@0423baf463ba:/#
root@0423baf463ba:/#
root@0423baf463ba:/#
root@0423baf463ba:/#
root@0423baf463ba:/# ls
alx-low_level_programming  alx-system_engineering-devops  boot  etc   lib    lib64   media  opt   root  sbin  sys  usr
alx-pre_course             bin                            dev   home  lib32  libx32  mnt    proc  run   srv   tmp  var
root@0423baf463ba:/# cd alx-system_engineering-devops
root@0423baf463ba:/alx-system_engineering-devops# ls
0x00-shell_basics  0x02-shell_redirections  0x03-shell_variables_expansions
root@0423baf463ba:/alx-system_engineering-devops# cd 0x02-shell_redirections
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# ls
0-hello_world  1-confused_smiley  2-hellofile  README.md
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# emacs 0-hello_world
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# emacs 0-hello_world
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# emacs 0-hello_world
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# ./0-hello_world
Hello, World\n
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# emacs 0-hello_world
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Add the 0-hello_world file to git
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git add 0-hello_world
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Commit the changes
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git commit -m "Add 0-hello_world script to print 'Hell
										bash: !': event not found
										root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
										root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Push the changes to the repository
										root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git push
										Username for 'https://github.com':
										Password for 'https://github.com':
										  remote: No anonymous write access.
										    fatal: Authentication failed for 'https://github.com/MGSerag/alx-system_engineering-devops.git/'
										    root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git remote set-url origin https://ghp_S0e5aFiXKmQJ2lLZstem_engineering-devops.git
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git push
										      Everything up-to-date
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Add the 0-hello_world file to git
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git add 0-hello_world
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Commit the changes
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git commit -m "Add 0-hello_world script to print 'Hell
bash: !': event not found
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Push the changes to the repository
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git push
Everything up-to-date
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Create the script file
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# touch 0-hello_world
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Add the script content
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# echo -e '#!/bin/bash\necho "Hello, World!"' > 0-hello_
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Make the script executable
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# chmod +x 0-hello_world
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Add the file to git
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git add 0-hello_world
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Commit the changes
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git commit -m "Add 0-hello_world script to print 'Hell
										      bash: !': event not found
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Push the changes to the repository
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git push
										      Everything up-to-date
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git remote set-url origin https://ghp_S0e5aFiXKmQJ2lLZstem_engineering-devops.git
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git push
										      Everything up-to-date
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git remote -v
										      origin  https://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@github.com/MGSerag/alx-system_engineering-devops.git (fetch)
										      origin  https://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@github.com/MGSerag/alx-system_engineering-devops.git (push)
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git remote set-url origin https://github.com/MGSerag/a
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# emacs 0-hello_world
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git add 0-hello_world
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Commit the changes
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git commit -m "Add 0-hello_world script to print 'Hell
bash: !': event not found
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Push the changes to the repository
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git push
Username for 'https://github.com':
Password for 'https://github.com':
remote: No anonymous write access.
fatal: Authentication failed for 'https://github.com/MGSerag/alx-system_engineering-devops.git/'
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git remote set-url origin https://ghp_S0e5aFiXKmQJ2lLZstem_engineering-devops.git
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git add 0-hello_world
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Commit the changes
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git commit -m "Add 0-hello_world script to print 'Hell
										      bash: !': event not found
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Push the changes to the repository
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git push
										      Everything up-to-date
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# emacs 0-hello_world
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Add the file to git
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git add 0-hello_world
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Commit the changes
										      root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git commit -m "Add 0-hello_world script to print 'Hell
bash: !': event not found
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Push the changes to the repository
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git commit -m "fix hello world"
[master d6911e2] fix hello world
 1 file changed, 1 insertion(+), 2 deletions(-)
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (4/4), 355 bytes | 355.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/MGSerag/alx-system_engineering-devops.git
   5e1d836..d6911e2  master -> master
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# emacs 1-confused_smiley
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Add the file to the staging area
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git add 1-confused_smiley
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Commit the changes
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git commit -m "Add 1-confused_smiley"
[master 50c9a3a] Add 1-confused_smiley
 1 file changed, 2 deletions(-)
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Push the changes to the repository
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git push origin main
error: src refspec main does not match any
error: failed to push some refs to 'https://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@github.com/MGSerag/alx-system_engineering-devops.git'
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (4/4), 353 bytes | 353.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/MGSerag/alx-system_engineering-devops.git
   d6911e2..50c9a3a  master -> master
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# emacs 2-hellofile
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Add the file to the staging area
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git add 2-hellofile
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Commit the changes
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git commit -m "Add 2-hellofile"
[master 4a29d99] Add 2-hellofile
 1 file changed, 2 deletions(-)
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Push the changes to the repository
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (4/4), 345 bytes | 345.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/MGSerag/alx-system_engineering-devops.git
   50c9a3a..4a29d99  master -> master
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# ls
0-hello_world  1-confused_smiley  2-hellofile  README.md
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Create the script file
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# echo -e '#!/bin/bash\ncat /etc/passwd /etc/hosts' > 3-twofiles
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections#
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# # Make the script executable
root@0423baf463ba:/alx-system_engineering-devops/0x02-shell_redirections# chmod +x 3-twofiles
~
