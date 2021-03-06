/*
 * tool.h
 *
 *  Created on: Jun 4, 2013
 *      Author: biorobotics
 *
 *  \todo is this file used?
 */

#ifndef TOOL_H_
#define TOOL_H_






#define TOOL_ROT_MIN_LIMIT (float)(-182.0 DEG2RAD)
#define TOOL_ROT_MAX_LIMIT (float)( 182.0 DEG2RAD)
#define WRIST_MIN_LIMIT (float)(-75.0 DEG2RAD)
#define WRIST_MAX_LIMIT (float)( 75.0 DEG2RAD)

#define GRASP1_MIN_LIMIT (float)(-89.0 DEG2RAD)
#define GRASP1_MAX_LIMIT (float)( 89.0 DEG2RAD)
#define GRASP2_MIN_LIMIT (float)(-89.0 DEG2RAD)
#define GRASP2_MAX_LIMIT (float)( 89.0 DEG2RAD)



// RICKS TOOLS - no ori
#define Z_INS_MAX_ANGLE_GREEN_RICK      0.2
#define Z_INS_MAX_ANGLE_GOLD_RICK     0.15
#define TOOL_ROT_MAX_ANGLE_RICK   330 DEG2RAD
#define WRIST_MAX_ANGLE_RICK      115 DEG2RAD
#define GRASP1_MAX_ANGLE_RICK     120 DEG2RAD
#define GRASP2_MAX_ANGLE_RICK     130 DEG2RAD

// Raven II davinci-style
#define Z_INS_MAX_ANGLE_RII_SQUARE      0.1    // 10cm  // NOT THE REAL LIMIT- approximate measurement
#define TOOL_ROT_MAX_ANGLE_RII_SQUARE   -330 DEG2RAD
#define WRIST_MAX_ANGLE_RII_SQUARE      115 DEG2RAD
#define GRASP1_MAX_ANGLE_RII_SQUARE     135 DEG2RAD
#define GRASP2_MAX_ANGLE_RII_SQUARE     135 DEG2RAD

// Square Robot DaVinci tools
#define Z_INS_MAX_ANGLE_DAVINCI_SQUARE      0.562    // 10cm  // NOT THE REAL LIMIT- approximate measurement
#define Z_INS_MIN_LIMIT_DAVINCI_SQUARE (float)( 0.18)
#define Z_INS_MAX_LIMIT_DAVINCI_SQUARE (float)( 0.53)

#define TOOL_ROT_MAX_ANGLE_DAVINCI_SQUARE   -260 DEG2RAD
#define WRIST_MAX_ANGLE_DAVINCI_SQUARE      90 DEG2RAD
#define GRASP1_MAX_ANGLE_DAVINCI_SQUARE     120 DEG2RAD
#define GRASP2_MAX_ANGLE_DAVINCI_SQUARE     120 DEG2RAD

// DaVinci tools with adapter
#define Z_INS_MAX_ANGLE_DAVINCI_ADAPT      0.562    // 10cm  // NOT THE REAL LIMIT- approximate measurement
#define Z_INS_MIN_LIMIT_DAVINCI_ADAPT (float) 0.23//( 0.18)
#define Z_INS_MAX_LIMIT_DAVINCI_ADAPT (float) 0.56//( 0.53)

#define TOOL_ROT_MAX_ANGLE_DAVINCI_ADAPT   260 DEG2RAD //changed from -260
#define WRIST_MAX_ANGLE_DAVINCI_ADAPT      90 DEG2RAD
#define GRASP1_MAX_ANGLE_DAVINCI_ADAPT     120 DEG2RAD
#define GRASP2_MAX_ANGLE_DAVINCI_ADAPT     120 DEG2RAD

/*
#define Z_INS_MAX_ANGLE_DAVINCI_SQUARE      0.07    // 10cm  // NOT THE REAL LIMIT- approximate measurement
#define Z_INS_MIN_LIMIT_DAVINCI_SQUARE (float)(-0.270)
#define Z_INS_MAX_LIMIT_DAVINCI_SQUARE (float)( 0.062)
#define TOOL_ROT_MAX_ANGLE_DAVINCI_SQUARE   -260 DEG2RAD
#define WRIST_MAX_ANGLE_DAVINCI_SQUARE      90 DEG2RAD
#define GRASP1_MAX_ANGLE_DAVINCI_SQUARE     120 DEG2RAD
#define GRASP2_MAX_ANGLE_DAVINCI_SQUARE     120 DEG2RAD
*/


// Default RII grasper (10MM, diamond)
//#define Z_INS_MAX_ANGLE      0.562  //0.1    // 10cm  // NOT THE REAL LIMIT- approximate measurement
#define TOOL_ROT_MAX_ANGLE   330 DEG2RAD
#define WRIST_MAX_ANGLE      115 DEG2RAD
#define GRASP1_MAX_ANGLE     120 DEG2RAD
#define GRASP2_MAX_ANGLE     130 DEG2RAD

#endif /* TOOL_H_ */
