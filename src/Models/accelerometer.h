#ifndef ACCELEROMETER_H_
#define ACCELEROMETER_H_

#include "system_model.h"

using namespace Eigen;

class Accelerometer: public SystemModel{
    public:
        void InitAccelerometer(MatrixXd *R_bn, VectorXd *w_bn, VectorXd *b_a, double *dt);
        VectorXd RunModel(VectorXd x) override;
        // VectorXd RunModel(std::vector<State<VectorXd>> x) override;
    private:
        MatrixXd *_R_bn;
        VectorXd *_w_bn;
        VectorXd *_b_a;
        double *_dt;
        // VectorXd _g_n;
};

#endif