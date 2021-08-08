#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <Eigen/Core>
#include <Eigen/Sparse>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;

int main(int argc, char* argv[]){

    Matrix<double,3,3> A;
    A.setRandom(3,3);
    Matrix<double,3,1> b;
    b.setRandom(3,1);
    Matrix<double,3,1> x = A.lu().solve(b);

    cout << A << endl;
    cout << b << endl;
    cout << x << endl;

    cout << argv[1] << endl;
    cout << argv[0] << endl;

    cout << A.setIdentity() << endl;
    cout << A.setOnes() << endl;
}