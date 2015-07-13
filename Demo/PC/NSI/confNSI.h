#define ON  0x01;
#define OFF 0x00;
#define btDost 1;
#define btVikl 2;

struct TI {
	unsigned char[10] name;
	portBASE_TYPE last_znach;
	unsigned char iterN;
	unsigned char maxIter;
	unsigned char value;
	unsigned char err;
	unsigned char BitFlag;
	long date;
	portBASE_TYPE hwdModule;
    portBASE_TYPE hwdAddress;
};

struct TC {
	unsigned char[10] name;
	portBASE_TYPE last_znach;
	unsigned char iterN;
	unsigned char maxIter;
	unsigned char value;
	unsigned char err;
	unsigned char BitFlag;
	long date;
};

struct object {
	unsigned char[10] name;
	portBASE_TYPE last_znach;
	unsigned char Runner;
	unsigned char TI;
	unsigned char TC;
	unsigned char Type;
	unsigned char BitFlag;
	long last_date;
};