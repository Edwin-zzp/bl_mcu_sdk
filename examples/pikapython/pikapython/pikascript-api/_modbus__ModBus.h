/*
 * [Warning!] This file is auto-generated by pika compiler.
 * Do not edit it manually.
 * The source code is *.pyi file.
 * More details: 
 * English Doc:
 * https://pikadoc.readthedocs.io/en/latest/PikaScript%20%E6%A8%A1%E5%9D%97%E6%A6%82%E8%BF%B0.html
 * Chinese Doc:
 * https://pikadoc.readthedocs.io/zh/latest/PikaScript%20%E6%A8%A1%E5%9D%97%E6%A6%82%E8%BF%B0.html
 */

#ifndef ___modbus__ModBus__H
#define ___modbus__ModBus__H
#include <stdio.h>
#include <stdlib.h>
#include "PikaObj.h"

PikaObj *New__modbus__ModBus(Args *args);

void _modbus__ModBus___init__rtu(PikaObj *self, int sendBuffSize, int readBuffSize);
void _modbus__ModBus___init__tcp(PikaObj *self, int sendBuffSize, int readBuffSize);
int _modbus__ModBus_deserializeMaskWriteRegister(PikaObj *self, int msgLength);
Arg* _modbus__ModBus_deserializeReadBits(PikaObj *self, int msgLength);
Arg* _modbus__ModBus_deserializeReadInputBits(PikaObj *self, int msgLength);
Arg* _modbus__ModBus_deserializeReadInputRegisters(PikaObj *self, int msgLength);
Arg* _modbus__ModBus_deserializeReadRegisters(PikaObj *self, int msgLength);
Arg* _modbus__ModBus_deserializeReportSlaveId(PikaObj *self, int msgLength, int maxDest);
Arg* _modbus__ModBus_deserializeWriteAndReadRegisters(PikaObj *self, int msgLength);
int _modbus__ModBus_deserializeWriteBit(PikaObj *self, int msgLength);
int _modbus__ModBus_deserializeWriteBits(PikaObj *self, int msgLength);
int _modbus__ModBus_deserializeWriteRegister(PikaObj *self, int msgLength);
int _modbus__ModBus_deserializeWriteRegisters(PikaObj *self, int msgLength);
Arg* _modbus__ModBus_getReadBuff(PikaObj *self);
Arg* _modbus__ModBus_getSendBuff(PikaObj *self);
int _modbus__ModBus_serializeMaskWriteRegister(PikaObj *self, int addr, int andMask, int orMask);
int _modbus__ModBus_serializeReadBits(PikaObj *self, int addr, int nb);
int _modbus__ModBus_serializeReadInputBits(PikaObj *self, int addr, int nb);
int _modbus__ModBus_serializeReadInputRegisters(PikaObj *self, int addr, int nb);
int _modbus__ModBus_serializeReadRegisters(PikaObj *self, int addr, int nb);
int _modbus__ModBus_serializeReportSlaveId(PikaObj *self);
int _modbus__ModBus_serializeWriteAndReadRegisters(PikaObj *self, int writeAddr, int writeNb, uint8_t* src, int readAddr, int readNb);
int _modbus__ModBus_serializeWriteBit(PikaObj *self, int addr, int status);
int _modbus__ModBus_serializeWriteBits(PikaObj *self, int addr, int nb, uint8_t* src);
int _modbus__ModBus_serializeWriteRegister(PikaObj *self, int addr, int value);
int _modbus__ModBus_serializeWriteRegisters(PikaObj *self, int addr, int nb, uint8_t* src);
void _modbus__ModBus_setSlave(PikaObj *self, int slave);

#endif