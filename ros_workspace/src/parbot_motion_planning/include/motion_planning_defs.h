#ifndef MOTION_PLANNING_DEFS_H
#define MOTION_PLANNING_DEFS_H

#define GRID_SIZE 0.02
#define WIDTH 0.68
#define LENGTH 0.6
#define ORIGIN_X 0.224
#define ORIGIN_Y WIDTH/2
#define pi 3.14159
#define RATE 100
#define SCAN_TOPIC "base_scan"//base_scan/scan"
#define PATH_TOPIC "local_path"
#define PUBLISHER_TOPIC "cmd_vel"//"husky/cmd_vel"
#define PATH_TARGET_FRAME "base_link"
#define ROBOT_POSE_TOPIC "/pose"
#define SETS_TO_SELCT 10
#define GOAL_DISTANCE WIDTH
#define THETA_INIT pi/-2
#define DELTA_THETA pi/16
#define NUM_THETAS 17
#define NUM_VELOCITIES 3
#define V_MAX 0.75//2.5//0.25//1//
#define V_MIN 0.2//GOAL_DISTANCE//0.2//WIDTH//
#define FAKE_TF_X -0.12
#define FAKE_TF_Y 0
#define BIG_NUM 99999999999
#endif
