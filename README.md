# su_root
==================
最近増えてきたVirtual OS Imageで提供されるSoftware(Github Enterpriseの古いバージョン、Hipchat Serverなど)において
sudo/suが禁止されているために、/var/logなどのfileを確認できない。
そのため、無理やりsuを実行するtool


# How to install

<1>login to Virtual OS as root user 

<2>execute below  
```
cd <dir>
gcc su_root.c -o su_root
```


<3>login to Host OS as root user, and mount the Virtual OS
```
su - 
cd <dir>
chown root:root su_root
chmod 4755 su_root
exit
```

<4>delete source file
```
rm su_root.c
```
