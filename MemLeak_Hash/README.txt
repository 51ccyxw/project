[1] VLD<内存泄露检测> 介绍
    VLD是一个轻量级的内存泄露检测工具，支持Linux和Windows平台，支持C++工程和C语言工程的内存泄露检测
    是一个使用非常方便的轻量级工具

[2] VLD的使用
    1> VLD以静态的形式发布
    2> 安装方法
	   
	   在Linux平台下
	   make
       拷贝vld_c.h和vld_cpp.h至 /usr/include 目录
       make install
	   32位系统: 拷贝vld_c.a和vld_cpp.a至 /lib/ 目录
       64位系统: 拷贝vld_c.a和vld_cpp.a至 /lib64/ 目录
	   要用的文件编译时加上链接库 -lvld_cpp或-lvld_c
       
	   在Windows平台下
       对于C++工程，在main()所在的文件引入 #include<vld_cpp.h>即可
       对于C语言工程，在main()所在的文件引入 #include<vld_c.h>,
            并在主函数的内的起始位值加入代码atexit(check_leak); 如:
       #include<vld_c.h>
       int main(int argc, char *argv[])
       {
           atexit(check_leak);
           //to do something......
           //......
           return 0;
       }

[3] test 目录中给出了相应的各种情况的测试代码，以供参考

.