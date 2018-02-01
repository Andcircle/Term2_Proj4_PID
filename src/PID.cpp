#include "PID.h"
#include <iostream>


using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID()
{
  p_error=0;
  i_error=0;
  d_error=0;

  /*
  * Coefficients
  */
  Kp=0;
  Ki=0;
  Kd=0;
}

PID::~PID() {}

void PID::Init(double kp, double ki, double kd) {
  Kp=kp;
  Ki=ki;
  Kd=kd;
}

double PID::UpdateError(double cte) {
  d_error = cte-d_error;
  i_error = i_error+cte;

  double steering = -Kp*cte-Kd*d_error-Ki*i_error;

  d_error = cte;

  return steering;
}

void PID::TotalError() {
}

