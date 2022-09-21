#ifndef NRVOLC_WIN_IMPL_H
#define NRVOLC_WIN_IMPL_H

#include <VolumeChanger.h>

struct IMMDevice;

class NRVOLC_LIB_EXPORT NrVolumeChangerWinImpl : public NrVolumeChanger
{
    IMMDevice* getDefaultInputDeviceId() const;
    IMMDevice* getDefaultOutputDeviceId() const;

    int setInputDeviceVolume(int devId, double percent);
    double getInputDeviceVolume(int devId) const;
    int setOutputDeviceVolume(int devId, double percent);
    double getOutputDeviceVolume(int devId) const;
public:
    NrVolumeChangerWinImpl(QObject *parent=nullptr);
    virtual int setDefaultInputVolume(double percent);
    virtual double getDefaultInputVolume() const;
    virtual int setDefaultOutputVolume(double percent);
    virtual double getDefaultOutputVolume() const;
};

#endif
