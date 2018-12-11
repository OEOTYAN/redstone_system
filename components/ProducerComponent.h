//
// Created by Earthcomputer on 10/12/18.
//

#ifndef REDSTONE_SYSTEM_PRODUCERCOMPONENT_H
#define REDSTONE_SYSTEM_PRODUCERCOMPONENT_H

#include "BaseCircuitComponent.h"

class ProducerComponent : public BaseCircuitComponent {
private:
    int field_3C;
    bool field_40;
    bool field_41;
public:
    ProducerComponent() {
        field_3C = 0;
        field_41 = false;
        field_40 = false;
    }

    // VTABLE #1
    ~ProducerComponent() override {
        // TODO: impl
    }

    // VTABLE #4
    void setStrength(int strength) override;

    // VTABLE #8
    bool canStopPower() override {
        return field_41;
    }

    // VTABLE #9
    void setStopPower(bool stopPower) override {
        field_41 = stopPower;
    }

    // VTABLE #10
    long getBaseType() const override {
        return TYPE_PRODUCER;
    }

    // VTABLE #11
    long getInstanceType() const override {
        return TYPE_PRODUCER;
    }

    // VTABLE #14
    bool allowConnection(CircuitSceneGraph *graph, const CircuitTrackingInfo *trackingInfo, bool *a4) override;

    // VTABLE #16
    bool evaluate(CircuitSystem *system, const BlockPos *pos) override;

    bool doesAllowAttachments() {
        // TODO: impl
    }
};

#endif //REDSTONE_SYSTEM_PRODUCERCOMPONENT_H
