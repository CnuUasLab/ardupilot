#define GPS_PROTOCOL    3               // 0 = NMEA
                                        // 1 = SIRF, 
                                        // 2 = uBlox                                                                    // 3 = ArduIMU
                                        // 4 = MediaTek,                                                                // 5 = Simulated GPS mode (Debug), 
                                        // -1 = no GPS                                                                                                                                                                                          //0-4 Ground Control Station:
#define GCS_PROTOCOL    3               // 0 = Standard ArduPilot (LabVIEW/HappyKillmore),
                                        // 1 = special test, 
                                        // 2 = Ardupilot Binary(not implemented),                                       // 3 = Xplane
                                        // 5 = Jason's GCS,
                                        // -1 = no GCS (no telemetry output)
                                        
#define HIL_MODE        HIL_MODE_SENSORS

#define HIL_PORT            0
#define GCS_PROTOCOL        GCS_PROTOCOL_MAVLINK
#define GCS_PORT            3
