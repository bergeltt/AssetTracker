#ifndef AssetTracker_h
#define AssetTracker_h

#include "application.h"
#include "math.h"

#include "Adafruit_GPS.h"
#include "Adafruit_LIS3DH.h"

class AssetTracker
{
public:

	AssetTracker();

	void turnOnAccel(void);

	void turnOnGPS(void);
	void turnOffGPS(void);
	void updateGPS(void);

	int readAccelX(void);
	int readAccelY(void);
	int readAccelZ(void);
	int readAccelXYZmagnitude(void);

	float readLat(void);
	float readLon(void);
	float readLatDeg(void);
	float readLonDeg(void);
	String readLatLonStr(void);
	float readHDOP(void);

	float getGpsAccuracy(void);
	float getSpeed();
	float getGeoIdHeight();
	float getAltitude();

	void useInternalGPSAntenna(void);
	void useExternalGPSAntenna(void);

	bool hasGPSFix(void);
    char* preNMEA(void);
	bool setupLowPowerWakeMode(uint8_t movementThreshold = 16);

  	uint8_t getHour();
	uint8_t getMinute();
  	uint8_t getSeconds();
  	uint8_t getYear();
  	uint8_t getMonth();
  	uint8_t getDay();

  	uint8_t getSatellites();
  	uint8_t getFixQuality();
  	uint8_t clearAccelInterrupt();
  	uint16_t getMilliseconds();
  	uint32_t getGpsTimestamp();
};

#endif // AssetTracker_h
