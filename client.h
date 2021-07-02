#ifndef ClientH
#define ClientH



typedef struct {
    char* socket;
	long delayTime;
	
} clientConf;


extern clientConf config;

#endif