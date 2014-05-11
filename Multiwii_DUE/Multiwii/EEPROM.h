#ifndef EEPROM_H_
#define EEPROM_H_


#if defined (ARDUINO_DUE)
 void eeprom_read_block (void *__dst, const void *__src, unsigned int __n);
 void eeprom_write_byte (uint8_t *__p, uint8_t __value);
 void eeprom_write_word (uint16_t *__p, uint16_t __value);
 void eeprom_write_block (const void *__src, void *__dst, unsigned int __n);
#endif

void readGlobalSet();
bool readEEPROM();
void update_constants();
void writeGlobalSet(uint8_t b);
void writeParams(uint8_t b);
void LoadDefaults();
void readPLog(void);
void writePLog(void);
#endif /* EEPROM_H_ */
