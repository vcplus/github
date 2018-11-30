

#pragma once
#include<iostream>
//位置式PID
ref class PID_incremental
{
private:
	float kp;
	float ki;
	float kd;
	float target;
	float actual;
	float e;
	float e_pre_1;
	float e_pre_2;
	float A;
	float B;
	float C;
public:
	PID_incremental();
	PID_incremental(float p, float i, float d);
	float pid_control(float tar, float act);
};
//增量PID
PID_incremental::PID_incremental() :kp(0), ki(0), kd(0), e_pre_1(0), e_pre_2(0), target(0), actual(0)
{
	A = kp + ki + kd;
	B = -2 * kd - kp;
	C = kd;
	e = target - actual;
}
PID_incremental::PID_incremental(float p, float i, float d) :kp(p), ki(i), kd(d), e_pre_1(0), e_pre_2(0), target(0), actual(0)
{
	A = kp + ki + kd;
	B = -2 * kd - kp;
	C = kd;
	e = target - actual;
}
float PID_incremental::pid_control(float tar, float act)
{
	float u_increment;
	target = tar;
	actual = act;
	e = target - actual;
	u_increment = A*e + B*e_pre_1 + C*e_pre_2;
	e_pre_2 = e_pre_1;
	e_pre_1 = e;
	if (u_increment > 2)
		u_increment = 2;
	if (u_increment<-2)
		u_increment = -2;


	return u_increment;
}



float control(float pre_deta, float now_deta)
{
	float beta = 0.1;
	now_deta = beta * pre_deta + (1 - beta)*now_deta;
	if (now_deta > 2)
		now_deta = 2;
	if (now_deta<-2)
		now_deta = -2;
	return now_deta;

}



