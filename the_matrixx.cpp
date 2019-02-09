#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <sstream>
/*Матрица — математический объект, записываемый в виде прямоугольной таблицы некоторых чисел, которая представляет собой совокупность строк и столбцов, на пересечении которых находятся её элементы.

Необходимо разработать класс Matrix для представления и работы с целочисленной матрицей. Класс Matrix должен иметь:
1. конструктор по умолчанию, который создаёт матрицу с нулём строк и нулём столбцов
2. конструктор от двух целочисленных параметров: numRows и numCols, — которые задают количество строк и столбцов матрицы соответственно
3. метод Reset, принимающий два целочисленных параметра, которые задают количество строк и столбцов матрицы соответственно
4. константный метод At, который принимает номер строки и номер столбца (именно в этом порядке; нумерация строк и столбцов начинается с нуля) и возвращает значение в соответствущей ячейке матрицы
5. неконстантный метод At с такими же параметрами, но возвращающий ссылку на значение в соответствущей ячейке матрицы
6. константные методы GetNumRows и GetNumColumns, которые возвращают количество строк и столбцов матрицы соответственно

Если количество строк или количество столбцов, переданное в конструктор класса Matrix или метод Reset, оказалось отрицательным, то должно быть выброшено стандартное исключение out_of_range.

Это же исключение должен бросать метод At, если переданная в него ячейка выходит за границы матрицы.

Помимо этого необходимо определить следующие операторы для класса Matrix:
1. оператор ввода из потока istream; формат ввода простой — сначала задаётся количество строк и столбцов (именно в этом порядке), а затем все элементы матрицы: сначала элемент первой строки и первого столбца, затем элемент первой строки и второго столбца и так далее
2. оператор вывода в поток ostream; он должен выводить матрицу в том же формате, в каком её читает оператор ввода, — в первой строке количество строк и столбцов, во второй — элементы первой строки, в третьей — элементы второй строки и т.д.
3. оператор проверки на равенство (==): он должен возвращать true, если сравниваемые матрицы имеют одинаковый размер и все их соответствующие элементы равны между собой, в противном случае он должен возвращать false.
4. оператор сложения: он должен принимать две матрицы и возвращать новую матрицу, которая является их суммой; если переданные матрицы имеют разные размеры этот оператор должен выбрасывать стандартное исключение invalid_argument.
*/
using namespace std;

class Matrix
{
 public:

    int col;
    int str;
    vector < vector<int> > tab;
    Matrix()
    {
        col=0;
        str=0;
    /*    for (int i=0;i<str;i++)
        {
			vector <int> a;
            tab.push_back(a);
            tab[i].push_back(0);
        }*/
    }
    void new_tab(int a,int b)
    {
        for (int i=0;i<a;i++)
        {
			vector <int> d (b);
            tab.push_back(d);
        }
    }
    Matrix(int numRows, int numCols)
    {
        try
        {
            if((numRows<0)||(numCols<0))
            throw 2;
        }
        catch(int e)
        {
            cout<<"out_of_range"<<endl;
        }
        str=numRows;
        col=numCols;
        new_tab(str,col);
    }
    void Reset(int a, int b)
    {
        try
        {
            if((a<0)||(b<0))
            throw 2;
        }
        catch(int  e)
        {
            cout<<"out_of_range"<<endl;
        }
        str=a;
        col=b;
        new_tab(str,col);
    }
    int At(const int numstr,const int numcol) const
    {
        try
        {
            if ((numstr>str)||(numcol>col))
             {
                throw 2;
            }
        }
        catch(int  g)
        {
            cout << "out_of_range" << endl;
        }
        return tab[numstr][numcol];
    }
    int* At(int a,int b)
    {
        try
        {
            if ((a>str)||(b>col))
            {
                throw 2;
            }
        }
        catch(int  g)
        {
            cout << "out_of_range" << endl;
        }
        return &tab[a][b];
    }
    int GetNumRows()
    {return str;}
    int GetNumColumns()
    {return col;}
    vector <int> ProCol(int b)
    {
		vector <int> c;
		for(int a=0;a<str;a++)
		{c.push_back(tab[a][b]);}
		return c;
	}
	vector <int> ProStr(int a)
    {
		vector <int> c;
		for(int b=0;b<str;b++)
		{c.push_back(tab[a][b]);}
		return c;
	}
	

};
int Sum(vector <int> a, vector <int> b)
{
	int c=0;
	for(unsigned  int i=0; i<a.size();i++)
	{c+=a[i]*b[i];}
	return c;
}
Matrix res(2,2);
ostream& operator<<(ostream& a,const Matrix asd)
{//cout<<a
    a<<asd.str<<" "<<asd.col<<endl;
    for(int i=0;i<asd.str;i++)
    {
        for(int y=0;y<asd.col;y++)
        {
        a<<asd.tab[i][y]<<" ";
        }
       a<<endl;
    }
    return a;
}
void operator>>(istream& a, Matrix& asd)
{
	int x; int c;
    a>>x>>c;
    for(int i=0;i<asd.str;i++)
    {
        for(int y=0;y<asd.col;y++)
        {
        a>>asd.tab[i][y];
        }
    }

}
/*5 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5
*/
bool operator==(const vector <int> lhs, const vector <int> rhs)
{
    for(unsigned int i=0;i<lhs.size();)
    {

        if(lhs[i]==rhs[i])
        {i++;}
        else
        {return false;}
        if(i==lhs.size()-1)
        {return true;}
    }
}
bool operator==(const Matrix lhs, const Matrix rhs )
{
    if((lhs.col==rhs.col)&&(lhs.str==rhs.str))
    {
        for(int i=0;i<rhs.str;)
        {
            if(lhs.tab[i]==rhs.tab[i])
            {i++;}
            else
            {return false;}
            if(i==rhs.str-1)
            {return true;}
        }
    }
    else
    {
        return false;
    }
}

Matrix& operator+(Matrix& lhs,Matrix& rhs)
{
	
    if((lhs.col==rhs.col)&&(lhs.str==rhs.str))
    {
        res.new_tab(rhs.str,rhs.col);
        for(int i=0;i<res.str;i++)
        {
            for(int y=0;y<res.col;y++)
            {
                res.tab[i][y]=lhs.tab[i][y]+rhs.tab[i][y];
            }
        }
        return res;
    }
    else
    {
        try
        {
        throw 2;

        }
        catch(int e)
        {
            cout<<"invalid_argument";
            
        }
    }
    return res;
}
Matrix& operator*(Matrix lhs, Matrix rhs)
{
    if(lhs.col==rhs.str)
    {
        res.str=rhs.col;
        res.col=lhs.str;
        res.new_tab(rhs.str,lhs.col);
        int i=0; int y=0;
        while(i<rhs.str)
        {
			while(y<lhs.col)
			{
				res.tab[i][y]=Sum(lhs.ProStr(i),rhs.ProCol(y));
				y++;
			}
			y=0;
            i++;
        }
        return res;
    }
    else
    {
        try{throw 2;}
        catch(int e)
        {cout<<"invalid_argument";}
    }
    
}
int main()
{
    int a=3;
    int b=3;
    Matrix asd(3,2);
    Matrix asdf(2,3);
    cin>>asd;
    cin>>asdf;
    cout<<asd<<endl;
    cout<<asdf<<endl;
    asd=asd*asdf;
    
    cout<<asd<<endl<<Sum(asd.ProStr(0),asd.ProCol(0));

}
