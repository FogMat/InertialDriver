#ifndef LETTURA_H
#define LETTURA_H

struct Lettura{
	double yaw_v;
	double yaw_a;
	double pitch_v;
	double pitch_a;
	double roll_v;
	double roll_a;
	
	Lettura();
	Lettura(const double& par_yaw_v, const double& par_yaw_a, const double& par_pitch_v, const double& par_pitch_a, const double& par_roll_v, const double& par_roll_a);
};

#endif
