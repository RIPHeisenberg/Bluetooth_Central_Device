
#ifndef BLUETOOTH_H_
#define BLUETOOTH_H_

   
    

   /////////////////////////////////
   //Bluetooth Initialization
   /////////////////////////////////
   static void log_init(void);
   static void timer_init(void);
   static void uart_init(void);
   static void buttons_leds_init(void);
   static void db_discovery_init(void);
   static void power_management_init(void);
   static void ble_stack_init(void);
   void gatt_init(void);
   static void nus_c_init(void);
   static void scan_init(void);
   void BLE_AoA_INIT(void);
   void IQDataRead(void);

  //////////////////////////////////
  //Bluetooth Functions
  //////////////////////////////////
  
   

 #endif //BLUETOOTH_H_