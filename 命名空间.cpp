//#include <iostream>
//using namespace std;
////using namespace std;	//打开C++标准库的头文件
//
//
////	使用命名空间的内容，一种是using  namespace,一种是命名空间名::变量名
//
////namespace Bird	//	定义命名空间
////{
////	int nAge = 100;
////}
////
////namespace Person
////{
////	int nAge = 200;
////}
////
//////using namespace Bird;
//////using namespace Person;
//
////命名空间 可以提高复用性
//namespace Bird
//{
//	int nAge = 100;
//	int nSex = 200;
//	int nName = 300;
//	void Show()
//	{
//		cout<<nAge<<endl;
//		cout<<nSex<<endl;
//		cout<<nName<<endl;
//	}
//}
//
//namespace Person
//{
//	int nAge = 1009;
//	int nSex = 2009;
//	int nName = 3009;
//	void Show()
//	{
//		cout<<nAge<<endl;
//		cout<<nSex<<endl;
//		cout<<nName<<endl;
//	}
//}
//
//using namespace Person;
//
//int main()
//{
//	/*std::cout<<Bird::nAge<<std::endl;
//	std::cout<<Person::nAge<<std::endl;*/
//
//	cout<<nAge<<endl;
//	cout<<nSex<<endl;
//	cout<<nName<<endl;
//	Show();
//
//	system("pause");
//	return 0;
//}
