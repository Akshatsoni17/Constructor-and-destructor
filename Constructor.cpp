#include<iostream>
using namespace std;
class cube{
    private:
    double height;
    public:
    double width;
    double length;
    double volume()
    {
        double vol = height*width*length;
        //double *pt1 = &vol;
        //cout<<vol;
        return vol;
    }
    cube()
    {
      cout<<"Enter length: "<<endl;
      cin>>length;
      cout<<"Enter width: "<<endl;
      cin>>width;
      cout<<"Enter height: "<<endl;
      cin>>height;
    }
    ~cube(){
        cout<<"Destructor executed";
    }
};
main()
{
    cube c1;
    c1.volume();
}