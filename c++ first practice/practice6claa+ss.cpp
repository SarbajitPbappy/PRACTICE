#include<bits/stdc++.h>
using namespace std;
class Cuboid{
    private:
        int length;
        int width;
        int height;
    public:
        Cuboid(){
            length = 0;
            width = 0;
            height = 0;
        }
    Cuboid(int l,int w,int h){
        length=l;
        width=w;
        height=h;
    }
    int getVolume(){
        return length*width*height;
    }
    int getSurfaceArea()
    {
        return 2*(length*height + length*height + height*width);
    }
};
 bool compareVolume(Cuboid c1,Cuboid c2){
        return c1.getVolume()<c2.getVolume();
    }
    bool compareSurfaceArea(Cuboid c1,Cuboid c2){
        return c1.getSurfaceArea()<c2.getSurfaceArea();
    }
int main(){
    vector<Cuboid>cuboids;
    cuboids.push_back(Cuboid(2,3,4));
    cuboids.push_back(Cuboid(3,4,5));
    cuboids.push_back(Cuboid(4,5,6));
    cuboids.push_back(Cuboid(5,6,7));
    cuboids.push_back(Cuboid(6,7,8));
    sort(cuboids.begin(),cuboids.end(),compareVolume);
    cout<<"Cuboids Sorted By Volume-->"<<endl;
    for(int i=0;i<cuboids.size();i++){
        cout<<"Cuboid "<<i+1<<":"<<cuboids[i].getVolume()<<endl;
    }
    sort(cuboids.begin(),cuboids.end(),compareSurfaceArea);
    cout<<"Cuboids Sorted By SurfaceArea-->"<<endl;
    for(int i=0;i<cuboids.size();i++){
        cout<<"Cuboid "<<i+1<<":"<<cuboids[i].getSurfaceArea()<<endl;
    }
    return 0;
}