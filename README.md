# C-_MYSQL_MYCAT
C++ 连接mysql 或mycat

作为一个java程序员很容易连接mysql，或者mycat。只要下载jar包，或者maven包依赖就可以了
公司有C++开发人员，说能连接mysql，不能连接mycat。经测试实际代码一样。特此记录一下

引用博客 http://www.cnblogs.com/Lu-Yuyang/p/9266976.html  解释的相当详细
工具dev C++

命令测试
  mycat   的测试命令：mysql -uroot -proot -h192.168.2.142 -P8066
  mysql   的测试命令：mysql -uroot -proot -h192.168.2.142 -P3306
0.引言

　　MySQL作为当前的一个主流的开源的关系型数据库，受到大家的广泛关注。DevC++也作为一个开源的简单的C++编辑器，有着比VS更简便更快捷的编译。但是目前网上，却很少有对 MySQL连接DevC++的链接，大多数都是MySQL链接VS，或者是针对Java，Python的连接教程。本文章，将弥补这一缺点，本人耗费了大量时间，从多个网站上查询类似的信息，并将以整合。如若有些不妥的地方，也请读者见谅。
  
1.准备工作
　　在DevC++链接数据时，我们首先需要一些准备操作，以保证后续的操作。

　　1.DevC++安装MySQL.Devpak，本项目里有MySQL.Devpak.bak  删了.bak后缀名 直接安装
  
    MySQL Connecter/C++官网地址：https://dev.mysql.com/downloads/connector/cpp/1.1.html

　　安装完成后，在DevC++的工具栏里可以找到Package Manager，即安装完成。
    2.MySQL的安装准备
    
　　  安装版本因人而异，下面提供官网上的一个下载地址：https://dev.mysql.com/downloads/installer/
      记住 
      
      bin 配置到环境变量里
      
      include 目录保存，dev C++ 配置用
      
      lib     目录保存，
      
     （在这里我使用的是MySQL5.7）  
  
 2.开始操作
 
　　1.关联文件
  
　　　　->项目->项目属性->参数，打开如下效果图
    
            在C编译器里输入-Wall

　　        在C++编译器里输入-W

　　        链接里->加入库或者对象，（找到DevC++安装目录/lib/libmysql.a）(这里可能实际目录找不到，添加的时候就会有),

　　        加入libmysql.a该库

　　        加入 -lmysql
          
    ->项目->项目属性->文件/目录
    
    分别添加：　　
      
      库目录：（刚刚MySQL的目录）/lib

　　　包含文件目录：（刚刚MySQL的目录）/include
   
 3.devc++ 创建代码
 
