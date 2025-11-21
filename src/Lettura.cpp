#include "../include/Lettura.h"

Lettura::Lettura()
{
	yaw_v = 0;
	yaw_a = 0;
	pitch_v = 0;
	pitch_a = 0;
	roll_v = 0;
	roll_a = 0;
}

Lettura::Lettura(const double& par_yaw_v, const double& par_yaw_a, const double& par_pitch_v, const double& par_pitch_a, const double& par_roll_v, const double& par_roll_a)
{
	yaw_v = par_yaw_v;
	yaw_a = par_yaw_a;
	pitch_v = par_pitch_v;
	pitch_a = par_pitch_a;
	roll_v = par_roll_v;
	roll_a = par_roll_a;
}
