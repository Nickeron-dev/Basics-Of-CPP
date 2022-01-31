// #include </usr/local/mysql-8.0.26-macos11-arm64/include/mysql.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main(void)
{
  // std::vector<std::string> tables;
  MYSQL_RES *result;
  MYSQL_ROW row;
  MYSQL *connection, mysql;

  int state;

  mysql_init(&mysql);

  connection = mysql_real_connect(&mysql,"127.0.0.1","root","rootpass","mysql",0,0,0);

  // cout << connection;
  if (connection == NULL)
  {
    std::cout << mysql_error(&mysql) << std::endl;
    // return tables;
  }
state = mysql_query(connection, "SHOW TABLES");
  if (state !=0)
  {
    std::cout << mysql_error(connection) << std::endl;
  }

  result = mysql_store_result(connection);

  std::cout << "tables: " << mysql_num_rows(result) << std::endl;
  while ( ( row=mysql_fetch_row(result)) != NULL )
  {
    cout << row[0] << std::endl;
  }

  mysql_free_result(result);
  mysql_close(connection);
  return 0;
}
