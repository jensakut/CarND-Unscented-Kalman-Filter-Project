#include <iostream>
#include "tools.h"

using Eigen::VectorXd;
using Eigen::MatrixXd;
using std::vector;

Tools::Tools() {}

Tools::~Tools() {}

VectorXd Tools::CalculateRMSE(const vector<VectorXd> &estimations,
                              const vector<VectorXd> &ground_truth) {
  /**
  TODO:
    * Calculate the RMSE here.
  */
  
	VectorXd rmse(4);
	rmse << 0,0,0,0;
    VectorXd residual(4);
    residual << 0,0,0,0;

	// check the validity of the following inputs:
	//  * the estimation vector size should not be zero
	//  * the estimation vector size should equal ground truth vector size
    if(estimations.size() != ground_truth.size() || estimations.size() == 0)
    {
        cout << "invalid inputs";
    }
	//accumulate squared residuals
	for(uint i=0; i < estimations.size(); ++i){
        residual = estimations[i]-ground_truth[i];
        residual = residual.array()*residual.array();
		rmse += residual;
	}
    
	//calculate the mean
	rmse = rmse/estimations.size();

	//calculate the squared root
	rmse = rmse.array().sqrt();
	//return the result
	return rmse;
}