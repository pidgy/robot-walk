#define SEED 1
#define LEFT 0
#define RIGHT 1
#define ROBOT_SPEED 1
#define ROBOT_COUNT 12
#define POINT_COUNT 1000
#define UI_SPEED 10
#define UI_ENABLED 1
#define LOG_ENABLED 0
#define UI_CHECK if (!UI_ENABLED) return
#define LOG_CHECK if (!LOG_ENABLED) return 
#define DRAW_ASCII 0
#define DRAW_OPENGL !DRAW_ASCII
