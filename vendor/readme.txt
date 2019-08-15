package/Config.in

...

menu "Miscellaneous"
...
+	source "package/helloworld/Config.in"
+	source "package/hellocpp/Config.in"
endmenu

-------------------------------

$ sudo apt-get install ncurses-dev
$ make menuconfig

Target packages->Miscellaneous->helloworld

-------------------------------


delete output/build/hello-1.0

$ rm -rf output/build/hellocpp-1.0/ && make

every time remove output/build/xxxx

---------------------------------

