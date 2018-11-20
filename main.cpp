#include<string.h>
#include<stdlib.h>	
#include<stdio.h>	
#include<winsock2.h>	 
#include <iostream> 
#include<C:\zz\MySQL Server 5.7\include\mysql.h>
#pragma comment(lib,"libmysql")	
#define HOST "192.168.2.142"
#define USERNAME "root"		
#define PASSWORD "root"	
#define DATABASE "TESTDB"
	
int main(){
	using std::cout; 
	MYSQL mysql;
	int res;	
	mysql_init(&mysql);

	if(mysql_real_connect(&mysql,HOST,USERNAME,PASSWORD,DATABASE,8066,NULL,CLIENT_FOUND_ROWS)){
		printf("连接成功");
		mysql_query(&mysql,"select * from t_user");
		
		MYSQL_RES *result;
		result = mysql_store_result(&mysql);
		cout<<result;
		if (result) {
         int row_num,col_num;
         row_num = mysql_num_rows(result);
         col_num = mysql_num_fields(result);
         cout<<"length:";
		cout<<row_num<<"--------------";
         //std::cout << "共有" << row_num << "条数据，以下为其详细内容：" << std::endl;
        
     }	
	}
}

