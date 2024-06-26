
/*****************************************************************
 *
 * Copyright (C) 2009-2023 EZTech Tecnologia e Automa��o Ltda.
 * All rights reserved.
 *
 * Created 01/06/2010
 * 
 * File: Definitions.h 
 * Desc: Public definitions header file 
 *
 * Visual SourceSafe details 
 * =========================
 *
 * $Header: /EZController.root/EZController/COMMON/Definitions.h 1     17/04/07 13:55 Kelvin Ussher $
 * $History: Definitions.h $
 * 
 * *****************  Version 1  *****************
 * User: Kelvin Ussher Date: 17/04/11   Time: 13:55
 * Created in $/EZController.root/EZController/COMMON
 * 
 * 
 ******************************************************************/

enum EClients 
{
	SERVER_CLIENT = 0 , 
	POS_CLIENT = 1 ,
	DB_CLIENT = 100 ,
	DRIVER_CLIENT = 200
} ;

typedef enum TClientType
{
	SIMPLE_CLIENT_TYPE	= 0x00 ,
	CALLS_CLIENT_TYPE	= 0x01 ,
	EVENTS_CLIENT_TYPE	= 0x02 ,
	DB_CLIENT_TYPE		= 0x04 , 
} TClientType ;


// Flags 1 
#define EZSERVER_LICENSE_MASK			0x01   // could be reused 
#define EZHO_LICENSE_MASK				0x02   
#define ZIGBEE_LICENSE_MASK				0x04   // inverted 0 = licensed
#define EZMONITOR_LICENSE_MASK			0x08   // inverted 0 = licensed
#define TANK_MANAGEMENT_LICENSE_MASK	0x10
#define DEVELOPMENT_LICENSE_MASK		0x20
#define XPERT_LICENSE_MASK				0x40
#define EZAPIS_LICENSE_MASK				0x80

// Flags 2
#define EZEMBEDDED_LICENSE_MASK		    0x01
#define AMBIENTAL_LICENSE_MASK		    0x02   // inverted 0 = licensed
#define EZFLEET_LICENSE_MASK		    0x04   // inverted 0 = licensed
#define EZTAG_LICENSE_MASK				0x08
#define PRODUCTS_LICENSE_MASK		    0x10   // inverted 0 = licensed
#define EZODO_LICENSE_MASK				0x20

   // 0ms Set event < Server > ID 707, Device type 16, ID -1,  event type 407 desc EZConfig

typedef enum TObjectType
{
	UNKNOWN_OBJECT ,
	DB_OBJECT ,
	EVENTS_OBJECT ,
	CLIENT_OBJECT ,
	PUMP_OBJECT ,
	HOSE_OBJECT ,
	GRADE_OBJECT ,
	TANK_OBJECT ,
	PORT_OBJECT ,
	DELIVERY_OBJECT ,
	ATTENDANT_OBJECT ,
	PUMP_DRV_OBJECT ,
	HOSE_DRV_OBJECT ,
	GRADE_DRV_OBJECT ,
	TANK_DRV_OBJECT ,
	PORT_DRV_OBJECT ,
	ZIGBEE_OBJECT ,
	EZMOD_OBJECT , 
	RESERVED_OBJECT ,
	CARD_CLIENT_OBJECT ,
	CARD_READ_OBJECT ,
	DELIVERY_EX_OBJECT ,
	LOG_EVENT_OBJECT ,
	SENSOR_OBJECT ,
	SENSOR_DRV_OBJECT ,
	PRODUCT_OBJECT ,
	SALE_ITEM_OBJECT ,
	PROBE_OBJECT ,
	LAST_OBJECT // must be last 
} TObjectType ;

typedef enum TZigBeeDevice
{
	UNKNOWN_ZBDEVICE , 
	OTHER_ZBDEVICE ,
	EZMOD_ZBDEVICE ,
	EZ2GM_ZBDEVICE ,
	EZ3GM_ZBDEVICE ,
	EZREMOTE_WIRELESS_ZBDEVICE , 
	EZREMOTE_SLOT1_ZBDEVICE , 
	EZREMOTE_SLOT2_ZBDEVICE , 
	EZREMOTE_SLOT3_ZBDEVICE , 
	EZREMOTE_SLOT4_ZBDEVICE , 
	EZPS_WIRELESS_ZBDEVICE , 
	EZPS_SLOT1_ZBDEVICE , 
	EZPS_SLOT2_ZBDEVICE , 
	EZPS_SLOT3_ZBDEVICE , 
	EZPS_SLOT4_ZBDEVICE , 
	EZIBR_WIRELESS_ZBDEVICE , 
	EZIBR_SLOT1_ZBDEVICE , 
	EZIBR_SLOT2_ZBDEVICE , 
	EZIBR_SLOT3_ZBDEVICE , 
	EZIBR_SLOT4_ZBDEVICE , 
	EZEMB_WIRELESS_ZBDEVICE , 
	EZEMB_SLOT1_ZBDEVICE , 
	EZEMB_SLOT2_ZBDEVICE , 
	EZEMB_SLOT3_ZBDEVICE , 
	EZEMB_SLOT4_ZBDEVICE , 
	EZHOSE_ZBDEVICE,
	EZODO_ZBDEVICE,
	EZ4GM_ZBDEVICE ,
	INVALID_ZBDEVICE ,
} TZigBeeDevice ;


typedef enum TPriceControl
{
	UNKNOWN_PRICE_CONTROL ,
	REMOTE_PRICE_CONTROL ,
	LOCAL_PRICE_CONTROL ,
} TPriceControl ; 

typedef enum TPriceType 
{
	UNKNOWN_PRICE_TYPE ,
	FIXED_PRICE_TYPE ,
	DISCOUNT_PRICE_TYPE ,
	SURCHARGE_PRICE_TYPE ,
} TPriceType ;

typedef enum TDurationType 
{
	UNKNOWN_DURATION_TYPE ,
	SINGLE_DURATION_TYPE ,
	MULTIPLE_DURATION_TYPE ,
} TDurationType ;

typedef enum TPumpReserve 
{
	UNKNOWN_RESERVE ,
	NOT_RESERVED  ,
	RESERVED_FOR_PREPAY ,
	AUTHED_FOR_PREPAY ,
	RESERVED_FOR_PREAUTH ,
	AUTHED_FOR_PREAUTH ,
	RESERVED_UNUSED1 ,
	RESERVED_UNUSED2 ,
	RESERVED_FOR_PAYMENT ,
	AUTHED_FOR_PAYMENT ,
} TPumpReserve ;

typedef enum TDisplayFormat
{
	UNKNOWN_DISPLAY_FORMAT ,
	PUMP_DISPLAY_4_3 ,		// 9.999
	PUMP_DISPLAY_4_2 ,		// 99.99
	PUMP_DISPLAY_4_1 ,		// 999.9
	PUMP_DISPLAY_4_0 ,		// 9999
	PUMP_DISPLAY_5_3 ,		// 99.999
	PUMP_DISPLAY_5_2 ,		// 999.99
	PUMP_DISPLAY_5_1 ,		// 9999.9
	PUMP_DISPLAY_5_0 ,		// 99999
	PUMP_DISPLAY_6_3 ,		// 999.999
	PUMP_DISPLAY_6_2 ,		// 9999.99
	PUMP_DISPLAY_6_1 ,		// 99999.9
	PUMP_DISPLAY_6_0 ,		// 999999
	PUMP_DISPLAY_4_N1 ,		// 99990
	PUMP_DISPLAY_4_N2 ,		// 999900
	PUMP_DISPLAY_4_N3 ,		// 9999000
	PUMP_DISPLAY_5_N1 ,		// 999990
	PUMP_DISPLAY_5_N2 ,		// 9999900
	PUMP_DISPLAY_5_N3 ,		// 99999000
	PUMP_DISPLAY_6_N1 ,		// 9999990
	PUMP_DISPLAY_6_N2 ,		// 99999900
	PUMP_DISPLAY_6_N3 		// 999999000
} TDisplayFormat ;

typedef enum TAuthMode
{
	INVALID_AUTH_MODE , 
	NOT_AUTHABLE ,
	COMP_AUTH ,
	AUTO_AUTH ,
	MONITOR_AUTH ,
	ATTENDANT_AUTH ,
	ATTENDANT_MONITOR_AUTH ,
	SPARE_AUTH ,
	TAG_AUTH ,
	OFFLINE_AUTH ,
	ATTENDANT_TAG_AUTH ,
	CLIENT_TAG_AUTH ,
	ATTENDANT_AND_CLIENT_TAG_AUTH,
	ATTENDANT_OR_CLIENT_TAG_AUTH,
	EXT_AUTH ,
	PRICE_TAG_AUTH ,						// new 
	ATTENDANT_PRICE_TAG_AUTH ,				// new 
	CLIENT_PRICE_TAG_AUTH ,					// new 
	ATTENDANT_AND_CLIENT_PRICE_TAG_AUTH,	// new 
	ATTENDANT_OR_CLIENT_PRICE_TAG_AUTH,		// new 
	LAST_AUTH_MODE 
} TAuthMode ;

typedef enum TStackMode
{
	INVALID_STACK_MODE , 
	STACK_DISABLED ,
   STACK_MANUAL ,
	STACK_AUTO 
} TStackMode ;

// paramenter value for GetFilteredObj 
#define NOT_CLEARED 0 

typedef enum TDeliveryState 
{
	UNKNOWN_DEL_STATE ,
	CURRENT ,
	STACKED ,
	CLEARED 
} TDeliveryState ;

// Tipo de Abastecimento ( DeliveryType ) e Tipo de SaleItem ( AuthTye ) 

typedef enum TDeliveryType 
{
	UNKNOWN_DEL_TYPE ,
	POSTPAY ,				// 1 Pos-pago 
	PREPAY ,
	PREPAY_REFUND ,
	PREAUTH ,
	MONITOR ,
	TEST ,					// 6 Aferição 
	DRIVEOFF ,				// 7 Fuga 
	OFFLINE ,				// 8 Offline, gerado dos encerrantes 
	ZERO_DELIVERY ,
	CARD_CLIENT ,			// 10 Com cartão do client 
	PAYMENT ,				// 11 Pagamento ( Pago pelo ConectTec ) 
	CANCELLED_EZTERM ,   // 12 SaleItem cancelado no EZTerm antes de pagar	-- NOVO 
	CANCELLED_PDV,			// 13 SaleItem cancelado no PDV antes de pagar		-- NOVO 
	RETURNED_PDV ,			// 14 SaleItem devolvido no PDV depois o pagamento -- NOVO 
	PAYMENT_ADVICE ,		// 15 
	INVALID_DEL_TYPE 
} TDeliveryType ;

typedef enum TDeliveryLogState 
{
	INVALID_LSTATE ,
	NOT_LOGGED_LSTATE ,
	LOGGED_LSTATE ,
	CLEARED_LSTATE 
} TDeliveryLogState ;

typedef enum TDeviceType 
{
	SERVER_DEVICE = 1 ,
	DISPENSER_DEVICE ,
	DISPENSER_DRIVER_DEVICE ,
	TANK_GAUGE_DEVICE ,
	TANK_GAUGE_DRIVER_DEVICE ,
	PRICE_SIGN_DEVICE ,
	PRICE_SIGN_DRIVER_DEVICE
} TDeviceType ;

typedef enum TEventType 
{
	INVALID_EVENT = 0 ,

	SERVER_INFO_EVENT = 100 ,
	SERVER_STARTED_EVENT  ,
	SERVER_STOPPED_EVENT ,

	DISPENSER_INFO_EVENT = 200 , 
	DISPENSER_INSTALLED_EVENT ,
	DISPENSER_STARTED_EVENT ,
	DISPENSER_STOPPED_EVENT ,
	DISPENSER_E_TOTALS_ERROR_EVENT ,
	DISPENSER_OFFLINE_DELIVERIES_EVENT ,
	DISPENSER_REMOTE_PRICE_CHANGE_EVENT ,
	DISPENSER_LOST_DELIVERY_EVENT ,
	DISPENSER_TAG_READ_EVENT ,
	DISPENSER_ATTENDANT_TAG_READ_EVENT ,

	DISPENSER_DRIVER_INFO_EVENT = 300 ,
	DISPENSER_DRIVER_STARTED_EVENT ,
	DISPENSER_DRIVER_STOPPED_EVENT ,

	TANK_INFO_EVENT = 400 ,
	TANK_SETUP_DATA_WARNING_EVENT ,
	TANK_LEAK_ALARM_EVENT ,
	TANK_HIGH_WATER_ALARM_EVENT ,
	TANK_OVERFILL_ALARM_EVENT ,
	TANK_LOW_PRODUCT_ALARM_EVENT ,
	TANK_SUDDEN_LOSS_ALARM_EVENT ,
	TANK_HIGH_PRODUCT_ALARM_EVENT ,
	TANK_INVALID_FUEL_LEVEL_ALARM_EVENT ,
	TANK_PROBE_OUT_ALARM_EVENT ,
	TANK_HIGH_WATER_WARNING_EVENT ,
	TANK_DELIVERY_NEEDED_WARNING_EVENT ,
	TANK_MAXIMUM_PRODUCT_ALARM_EVENT ,
	TANK_GROSS_LEAK_TEST_FAILED_ALARM_EVENT ,
	TANK_PERIODIC_LEAK_TEST_FAILED_ALARM_EVENT ,
	TANK_ANNUAL_LEAK_TEST_FAILED_ALARM_EVENT ,
	TANK_PERIODIC_TEST_NEEDED_WARNING_EVENT ,
	TANK_ANNUAL_TEST_NEEDED_WARNING_EVENT ,
	TANK_PERIODIC_TEST_NEEDED_ALARM_EVENT ,
	TANK_ANNUAL_TEST_NEEDED_ALARM_EVENT ,
	TANK_LEAK_TEST_ACTIVE_INFO_EVENT ,
	TANK_NO_CSLD_IDLE_TIME_WARNING_EVENT ,
	TANK_SIPHON_BREAK_ACTIVE_WARNING_EVENT ,
	TANK_CSLD_RATE_INCREASE_WARNING_EVENT ,
	TANK_ACCUCHART_CALIBARTION_WARNING_EVENT ,
	TANK_HRM_RECONCILATION_WARNING_EVENT ,
	TANK_HRM_RECONCILATION_ALARM_EVENT ,
	TANK_COLD_TEMPERATURE_WARNING_EVENT ,
	TANK_MISSING_DELIVERY_TICKET_WARNING_EVENT ,
	TANK_LINE_GROSS_LEAK_ALARM_EVENT ,
	TANK_SENSOR_STATE_ALARM_EVENT ,

	TANK_GAUGE_INFO_EVENT = 500 ,
	TANK_GAUGE_INSTALLED_EVENT ,
	TANK_GAUGE_STARTED_EVENT ,
	TANK_GAUGE_STOPPED_EVENT ,

	TANK_GAUGE_DRIVER_INFO_EVENT = 600 ,
	TANK_GAUGE_DRIVER_STARTED_EVENT ,
	TANK_GAUGE_DRIVER_STOPPED_EVENT ,

	PRICE_SIGN_INFO_EVENT = 700 ,
	PRICE_SIGN_INSTALLED_EVENT ,
	PRICE_SIGN_STARTED_EVENT ,
	PRICE_SIGN_STOPPED_EVENT ,

	PRICE_SIGN_DRIVER_INFO_EVENT = 800 ,
	PRICE_SIGN_DRIVER_STARTED_EVENT ,
	PRICE_SIGN_DRIVER_STOPPED_EVENT ,
} TEventType ;


typedef enum TResult 
{
	INVALID_HEADER_VERSION			= -1,
	INVALID_INTERFACE_VERSION		= -2,
	INVALID_INTERFACE_ID			= -3,
	INVALID_FUNCTION_ID				= -4,
	INVALID_SOURCE_ID				= -5,
	INVALID_DESTINATION_ID			= -6,
	INVALID_OBJECT_ID				= -7,
	INVALID_SEQUENCE_NO				= -8,
	MSG_IN_BUFFER_OVERFLOW 			= -9,
	MSG_OUT_BUFFER_OVERFLOW 		= -10,
	PARAMETER_TYPE_MISMATCH 		= -11,
	PARAMETER_COUNT_MISMATCH 		= -12,
	SERVER_TIMEOUT 					= -13,
	CONNECTION_BROKEN 				= -14,
	SOCKET_READ_ERROR 				= -15,
	NO_MSG_ERROR					= -16, 
	SOCKET_WRITE_ERROR 				= -17,
	SERVER_NONASYNC_CALL			= -18, 
	SOCKET_NOT_CONNECTED			= -19,
	CLIENT_NOT_CONNECTED			= -20,
	OCX_NOT_CONNECTED				= -21, 
	INVALID_CLIENT_TYPE				= -22,
	INTERNAL_SERVER_ERROR			= -23,
	CALL_SOCKET_CLOSED_RESULT		= -24,
	BAD_CRC_OR_FORMAT_RESULT		= -25,
	CALL_FAILED_RESULT				= -26,
	INTERNAL_EXCEPTION_RESULT		= -27, 
	LAST_INTERNAL_RESULT			= -28, 
	OK_RESULT						= 0,
	OBJECT_EXISTS_RESULT, 
	OBJECT_DOES_NOT_EXIST_RESULT,
	OBJECT_HAS_DEPENDANCIES_RESULT,
	INVALID_INTERFACE_RESULT,
	INVALID_EVENTS_SOCKET_RESULT,
	INVALID_OBJECT_LINK_RESULT , 
	INVALID_OBJECT_PARAMETER_RESULT ,	// new 
	NOT_LOGGED_ON_RESULT , 
	ALREADY_LOGGED_ON_RESULT ,
	INVALID_LOGON_RESULT ,
	INVALID_CLIENT_TYPE_RESULT ,
	PUMP_NOT_RESPONDING_RESULT,
	PUMP_IN_USE_RESULT ,
	PUMP_ALREADY_RESERVED_RESULT ,
	PUMP_NOT_AVAILABLE_RESULT ,
	PUMP_NOT_RESERVED_RESULT ,
	PUMP_NOT_RESERVED_FOR_PREPAY_RESULT ,
	PUMP_NOT_RESERVED_BY_YOU_RESULT ,
	INVALID_PRESET_TYPE_RESULT ,
	INVALID_HOSE_MASK_RESULT ,
	PUMP_NOT_RESERVED_FOR_PREAUTH_RESULT ,
	PREPAYS_NOT_PREMITTED_RESULT ,
	PREAUTHS_NOT_PREMITTED_RESULT ,		// new 
	PUMP_CANNOT_BE_AUTHED_RESULT ,
	PUMP_NOT_AUTHED_RESULT ,
	NO_DELIVERY_AVAILABLE_RESULT ,
	STACK_IS_DISABLED_RESULT ,
	NO_CURRENT_DELIVERY_RESULT ,
	STACK_FULL_RESULT ,
	PUMP_NOT_STOPPED_RESULT ,
	PUMP_NOT_DELIVERING_RESULT ,
	INVALID_PRESET_AMOUNT_RESULT ,
	PUMP_IS_STOPPED_RESULT ,
	DELIVERY_ALREADY_LOCKED_RESULT ,
	DELIVERY_IS_RESERVED_RESULT ,
	DELIVERY_NOT_LOCKED_RESULT ,
	DELIVERY_NOT_LOCKED_BY_YOU_RESULT ,
	DELIVERY_TYPE_CANNOT_BE_STACKED_RESULT ,
	DELIVERY_CANNOT_BE_CLEARED_AS_THIS_TYPE_RESULT ,
	DELIVERY_NOT_CURRENT_RESULT ,
	INVALID_CLIENT_ID_RESULT ,
	DELIVERY_TERMINATED_RESULT ,
	HAS_CURRENT_DELIVERY_RESULT ,
	ATTENDANT_NOT_LOGGED_ON_RESULT , 
	ATTENDANT_ALREADY_LOGGED_ON_RESULT ,
	PUMP_IN_WRONG_AUTH_MODE_RESULT ,
	PUMP_HAS_DELIVERIES_RESULT ,
	SERVER_NOT_LICENSED_RESULT ,
	NO_EZMOD_RESULT ,
	LICENSE_EXPIRED_RESULT ,
	DELAYED_AUTH_RESULT ,
	PUMP_NOT_RESERVED_FOR_PAYMENT_RESULT ,
	ZIGBEE_MODULE_TYPE_ERROR_RESULT ,
	DELAY_LOGON_RESULT ,
	STANDALONE_AUTHMODE_ERROR_RESULT ,
	SERVER_CLIENT_INCOMPATIBLE_ERROR_RESULT ,
	TAG_ALREADY_IN_USE_ERROR_RESULT ,
	LOG_EVENT_ALREADY_ACKED_RESULT ,
	BAD_SESSION_ID_RESULT ,
	SOCKETS_INUSE_RESULT ,
	SOCKET_UNCHANGED_RESULT ,
	INVALID_SOCKET_RESULT ,
	BAD_POWER_RESULT ,
	IN_PROGRESS_RESULT ,
	API_NOT_SUPPORTED_RESULT ,
	MAX_CLIENTS_EXCEEDED_RESULT ,
	CLIENT_LICENSE_INVALID_RESULT ,
	LAST_RESULT // must be last
} TResult ;

typedef enum TPresetType 
{	
	INVALID_PRESET_TYPE = 0 ,
	NO_PRESET_TYPE ,
	DOLLAR_PRESET_TYPE ,
	VOLUME_PRESET_TYPE ,
	DOLLAR_PREPAY_TYPE ,
	VOLUME_PREPAY_TYPE ,
	DOLLAR_PREAUTH_TYPE ,
	VOLUME_PREAUTH_TYPE ,
	DELETE_TAG_TYPE 
} TPresetType ;

typedef enum TPumpState 
{
	INVALID_PUMP_STATE = 0 ,
	NOT_INSTALLED_PUMP_STATE ,
	NOT_RESPONDING_1_PUMP_STATE ,
	IDLE_PUMP_STATE ,
	PRICE_CHANGE_STATE ,
	AUTHED_PUMP_STATE ,
	CALLING_PUMP_STATE ,
	DELIVERY_STARTING_PUMP_STATE ,
	DELIVERING_PUMP_STATE ,
	TEMP_STOPPED_PUMP_STATE ,
	DELIVERY_FINISHING_PUMP_STATE ,
	DELIVERY_FINISHED_PUMP_STATE ,
	DELIVERY_TIMEOUT_PUMP_STATE ,
	HOSE_OUT_PUMP_STATE ,
	PREPAY_REFUND_TIMEOUT_STATE ,
	DELIVERY_TERMINATED_STATE ,
	ERROR_PUMP_STATE ,
	NOT_RESPONDING_2_PUMP_STATE ,
	LAST_PUMP_STATE ,
} TPumpState ;

typedef enum  
{
	INVALID_PORT_STATUS = 0 ,
	CLOSED_PORT_STATUS , 
	OPEN_PORT_STATUS 
} TPortStatus ;

typedef enum 
{
	INVALID_TAG_TYPE , 
	ATTENDANT_TAG_TYPE ,
	BLOCKED_ATTENDANT_TAG_TYPE ,
	WRONG_SHIFT_ATTENDANT_TAG_TYPE ,
	CLIENT_TAG_TYPE ,
	BLOCKED_CLIENT_TAG_TYPE ,
	UNKNOWN_TAG_TYPE , 
	EXPIRED_CLIENT_TAG_TYPE , 
	SITE_USER_TAG_TYPE ,
	SITE_MANAGER_TAG_TYPE,
	SITE_ADMIN_TAG_TYPE,
	TEST_DELIVERY_TAG_TYPE ,
	PRICE_LEVEL_1_TAG_TYPE , // new 
	PRICE_LEVEL_2_TAG_TYPE , // new 
	PRODUCT_TAG_TYPE , 
	EXPIRED_ATT_TAG_TYPE,
	PRICE_LEVEL_3_TAG_TYPE , // new
	PRICE_LEVEL_4_TAG_TYPE , // new
	LAST_TAG_TYPE
} TTagType ;

typedef enum
{
	INVALID_CARD_TYPE ,
	VEHICLE_CARD_TYPE ,
	ATTENDANT_CARD_TYPE , 
	DRIVER_CARD_TYPE ,
	SECONDARY_VEHICLE_CARD_TYPE , 
	SECONDARY_ATTENDANT_CARD_TYPE,
	SECONDARY_DRIVER_CARD_TYPE ,  
	SECONDARY_PRODUCT_CARD_TYPE ,  
	PRODUCT_CARD_TYPE ,  
	LAST_CARD_TYPE 
} TCardType ;

typedef enum
{
	INVALID_ENTRY_TYPE,
	NO_ENTRY_TYPE,
	ODO_ENTRY_TYPE,
	DRIVER_ENTRY_TYPE,
	ODO_DRIVER_ENTRY_TYPE,
	OTHER_ENTRY_TYPE,
	OTHER_ODO_ENTRY_TYPE,
	OTHER_DRIVER_ENTRY_TYPE,
	OTHER_ODO_DRIVER_ENTRY_TYPE,
	LIMIT_ENTRY_TYPE,
	LIMIT_ODO_ENTRY_TYPE,
	LIMIT_DRIVER_ENTRY_TYPE,
	LIMIT_ODO_DRIVER_ENTRY_TYPE,
	LIMIT_OTHER_ENTRY_TYPE,
	LIMIT_OTHER_ODO_ENTRY_TYPE,
	LIMIT_OTHER_DRIVER_ENTRY_TYPE,
	LIMIT_OTHER_ODO_DRIVER_ENTRY_TYPE
} TEntryType ;

typedef enum TPromptID
{
	INVALID_PROMPT_ID , 
	ENTER_ODO_PROMPT_ID , 
	PRICE_4_LEVEL_PROMPT_ID , 
	PRODUCT_QUANTITY_PROMPT_ID , 
	PRODUCT_CANCEL_PROMPT_ID , 
	ETOTS_CONSULT_PROMPT_ID ,
	DELIVERY_CONSULT_PROMPT_ID , 
	PUMP_STATE_PROMPT_ID ,
	ATTENDANT_PROMPT_ID ,
	CLIENT_PROMPT_ID , 
	CLIENT_OR_ATTENDANT_PROMPT_ID ,
	PRODUCT_MENU_PROMPT_ID , 
	PRODUCT_SELL_PROMPT_ID ,
	PRODUCT_CONSULT_PROMPT_ID ,
	PRODUCT_BASKET_EMPTY_PROMPT_ID , 
	PRODUCT_INVALID_PROMPT_ID ,
	PRODUCT_CONFIRM_PROMPT_ID , 
	IDLE_MENU_PROMPT_ID ,
	HOSE_PRICE_PROMPT_ID ,
	END_OF_LIST_PROMPT_ID ,
	AUTHED_PROMPT_ID ,
	NO_GRADE_PROMPT_ID ,
	RE_ENTER_ODO_PROMPT_ID,
	FUELLING_POSITION_PROMPT_ID,

	DRIVER_PROMPT_ID ,
	DRIVER_PIN_PROMPT_ID,
	UNKNOWN_DRIVER_PROMPT_ID ,
	BAD_DRIVER_PIN_PROMPT_ID ,

	FUELLING_POINT_BAD_PROMPT_ID ,
	CARD_BLOCKED_PROMPT_ID ,
	TEST_DELIVERY_PROMPT_ID ,

	ATTENDANT_OR_ID_PROMPT_ID ,
	ATTENDANT_ID_PROMPT_ID ,
	ATTENDANT_PIN_PROMPT_ID ,
	UNKNOWN_ATTENDANT_PROMPT_ID ,
	BAD_ATTENDANT_PIN_PROMPT_ID ,

	CLIENT_OR_ID_PROMPT_ID ,
	CLIENT_ID_PROMPT_ID ,
	CLIENT_PIN_PROMPT_ID ,
	UNKNOWN_CLIENT_PROMPT_ID ,
	BAD_CLIENT_PIN_PROMPT_ID ,

	ATTENDANT_CLIENT_CONFIRM_PROMPT_ID , 

	LAST_PROMPT_ID ,

	GET_VERSION_PROMPT_ID = 200 ,
	SET_KEYPAD_CONFIG_PROMPT_ID ,
	GET_KEYPAD_CONFIG_PROMPT_ID ,
	DEFAULT_KEYPAD_CONFIG_PROMPT_ID

}  TPromptID ;

typedef enum TProductConfirmType 
{
	INVALID_CONFIRM_TYPE , 
	NO_CONFIRM_TYPE	 , 
	QTY_CONFIRM_TYPE , 
	YES_NO_CONFIRM_TYPE	,
	YES_NO_AND_QTY_CONFIRM_TYPE ,
	LAST_CONFIRM_TYPE 
} TProductConfirmType ;

typedef enum TIDRequestType 
{
	INVALID_IDREQ_TYPE , 
	CARD_ONLY_IDREQ_TYPE , 
	CARD_OR_ID_IDREQ_TYPE , 
	CARD_OR_ID_CONFIRM_IDREQ_TYPE , 
	ID_ONLY_IDREQ_TYPE ,
	ID_ONLY_CONFIRM_IDREQ_TYPE ,
	LAST_IDREQ_TYPE ,
} TIDRequestType ;


typedef enum THose
{
	NO_HOSES	= 0x00 ,
	HOSE_1		= 0x01 ,
	HOSE_2		= 0x02 ,
	HOSE_3		= 0x04 ,
	HOSE_4		= 0x08 ,
	HOSE_5		= 0x10 ,
	HOSE_6		= 0x20 ,
	HOSE_7		= 0x40 ,
	HOSE_8		= 0x80 ,
	ALL_HOSES	= 0xFF
} THose ;

class CCur ; 

extern DllInterface short  THose2Num( THose h ) ;
extern DllInterface THose  Num2THose( int h ) ;
extern DllInterface short  FormatToDecimals( TDisplayFormat f ) ;
extern DllInterface short  FormatToWidth( TDisplayFormat f) ;
extern DllInterface CCur  FormatToTolerance( TDisplayFormat f ) ;

typedef enum TAllocLimitType 
{
	INVALID_LIMIT_TYPE = 0 ,
	NO_LIMIT_TYPE ,
	DOLLAR_LIMIT_TYPE ,
	VOLUME_LIMIT_TYPE 
} TAllocLimitType  ;

typedef enum TClientEvent 
{
	NO_CLIENT_EVENT ,
	PUMP_EVENT ,
	DELIVERY_EVENT ,
	SERVER_EVENT , 
	CLIENT_EVENT ,
	DB_LOG_EVENT ,
	DB_LOG_DELIVERY ,
	DB_CLEAR_DELIVERY ,
	DB_STACK_DELIVERY ,
	DB_LOG_ETOTALS ,
	DB_TRIGGER ,
	DB_ATTENDANT_LOGON_EVENT ,
	DB_ATTENDANT_LOGOFF_EVENT ,
	DB_TANK_STATUS ,
	UNUSED1_EVENT ,
	UNUSED2_EVENT ,
	UNUSED3_EVENT , 
   ZERO_DELIVERY_EVENT ,
	UNUSED4_EVENT ,
	ZB_PAN_EVENT ,
	UNUSED5_EVENT ,
	UNUSED6_EVENT ,
	CARD_READ_EVENT , 
	ZB2G_STATUS_EVENT ,
	LOG_EVENT_EVENT ,
	SALE_ITEM_EVENT ,
	EZODO_EVENT ,
	EZTERM_PROMPT_EVENT ,
} TClientEvent  ;


typedef enum 
{
 DB_NOT_CONNECTED_HO_RESULT = -1,
 OK_HO_RESULT = 0
} TEZHOResult ;

#define NO_ZB_ADDRESS (( __int64 ) -1 ) 


typedef enum 
{
	SERVER_ALR , 
	PUMP_ALR , 
	TANK_ALR , 
	HOSE_ALR , 
	GRADE_ALR ,
	EZID_ALR ,
	ATTENDANT_ALR , 
	CARD_ALR , 
	PORT_ALR , 
	PROCESS_ALR ,
	POS_ALR ,
	ATG_ALR , 
	SENSOR_ALR , 
	PRICE_SIGN_ALR , 
	PRODUCT_ALR ,
	MVC_ALR , 
	USERDEFINED_ALR ,
} TLogEventDeviceType ;



typedef enum
{
	INFORMATION_EVENT ,
	WARNING_EVENT ,
	ALARM_EVENT ,
} TLogEventLevel ;


typedef enum 
{
	INITIALIZE_TALR = 0 , 
	TERMINATE_TALR , 
	START_TALR , 
	STOP_TALR , 
	STOP_START_TALR ,
	ADD_TALR , 
	DELETE_TALR , 
	EDIT_TALR ,
	PRICE_TALR , 
	OFFPRICE_TALR , 
	OFFLINE_TALR ,
	ETOT_REVERSE_TALR , 
	ETOT_ZEROED_TALR ,
	MEMORY_TALR , 
	RESET_TALR ,
	MVC_TALR ,
	TANK_LOW_PRODUCT_WARNING_START_TALR = 100 ,
	TANK_LOW_PRODUCT_WARNING_END_TALR ,
	TANK_LOW_PRODUCT_ALARM_START_TALR ,
	TANK_LOW_PRODUCT_ALARM_END_TALR ,
	TANK_HI_PRODUCT_WARNING_START_TALR ,
	TANK_HI_PRODUCT_WARNING_END_TALR ,
	TANK_HI_PRODUCT_ALARM_START_TALR ,
	TANK_HI_PRODUCT_ALARM_END_TALR ,
	TANK_HI_WATER_WARNING_START_TALR ,
	TANK_HI_WATER_WARNING_END_TALR ,
	TANK_HI_WATER_ALARM_START_TALR ,
	TANK_HI_WATER_ALARM_END_TALR ,
	TANK_PROBE_STOPPED_RESPONDING_TALR ,
	TANK_PROBE_STARTED_RESPONDING_TALR ,
	TANK_ATG_STOPPED_RESPONDING_TALR ,
	TANK_ATG_STARTED_RESPONDING_TALR ,
	TANK_DROP_START_TALR ,
	TANK_DROP_END_TALR ,
	TANK_DROP_DOCUMENT_TALR ,
	TANK_LEAK_START_TALR ,
	TANK_LEAK_END_TALR ,
	TANK_STATE_TALR ,
	TANK_CONFIG_TALR , 
	TANK_CALIBRATION_ERROR_TALR ,
	ATTENDANT_LOGGED_ON_TALR = 200 ,
	ATTENDANT_LOGGED_OFF_TALR,
	ATTENDANT_CARD_BLOCKED_TALR,
	ATTENDANT_WRONG_SHIFT_TALR,
	CLIENT_CARD_BLOCKED_TALR,
	UNKNOWN_CARD_TALR,
	SENSOR_ON_TALR = 300,
	SENSOR_OFF_TALR, 
	MVC_POWER_GOOD_TALR = 400, 
	MVC_POWER_BATT_TALR,
	MVC_POWER_BAD_TALR,
	MVC_POWER_OFF_TALR,
	MVC_TAMPER_START_TALR,
	MVC_TAMPER_STOP_TALR,
	MVC_CONFIG_START_TALR,
	MVC_CONFIG_END_TALR,
	MVC_CALIBRATION_TALR,
	MVC_MCM_ACTIVE_TALR, 
	MVC_MCM_INACTIVE_TALR,
	MVC_TANK_STATE_TALR

} TLogEventType ;


#define TANK_HI_PRODUCT_ALARM_BIT		0x00000001
#define TANK_HI_PRODUCT_WARNING_BIT		0x00000002 
#define TANK_LOW_PRODUCT_ALARM_BIT		0x00000004
#define TANK_LOW_PRODUCT_WARNING_BIT	0x00000008 
#define TANK_HI_WATER_ALARM_BIT			0x00000010
#define TANK_HI_WATER_WARNING_BIT		0x00000020
#define TANK_RESPONDING_BIT				0x00000040 
#define TANK_DROP_BIT					0x00000080
#define TANK_LEAK_BIT					0x00000100 
#define TANK_CONFIG_BIT					0x00000200 
#define ATG_RESPONDING_BIT				0x00000400
#define TANK_CALIBRATION_ERROR_BIT		0x00000800


typedef enum TTankType 
{
	INVALID_TANK_TYPE = 0 ,
	MANUAL_DIP_TANK_TYPE ,
	GAUGED_TANK_TYPE ,
	CALCULATE_HORIZONTAL_TANK_TYPE , 
	CALIBRATE_HORIZONTAL_TANK_TYPE ,
	RECONCILE_TANK_TYPE ,
	CALIBRATE_VERTICAL_TANK_TYPE ,  // new  
	CALCULATE_VERTICAL_TANK_TYPE , 
	LAST_TANK_TYPE 
} TTankType ;

typedef enum TTankState 
{
	NOT_RESPONDING_TANKSTATE ,
	IDLE_TANKSTATE ,
	DELIVERING_TANKSTATE ,
	RECEIVING_TANKSTATE ,
	IB_NOT_RESPONDING_TANKSTATE ,
	UNKNOWN_TANKSTATE ,
} TTankState ;

typedef enum TAttendantType 
{
	BLOCKED_ATTTYPE = 0 ,
	ENABLED_ATTTYPE ,
	LOG_ON_OFF_ATTTYPE ,
	SITE_USER_ATTTYPE ,
	SITE_MANAGER_ATTTYPE ,
	SITE_ADMIN_ATTTYPE ,
	TEST_DELIVERY_ATTTYPE,
	PRICE_LEVEL_1_ATTTYPE , // new 
	PRICE_LEVEL_2_ATTTYPE , // new 
	PRICE_LEVEL_3_ATTTYPE , // new 
	PRICE_LEVEL_4_ATTTYPE , // new 
	UNKOWN_ATTTYPE
} TAttendantType ; 

// Definition of AuthType for Extended delivery properties. 

typedef enum TAuthorisationType 
{
	LOCAL_AUTH_TYPE = 0 ,
	PAYMENT_AUTH_TYPE , 
	CARREFOUR_AUTH_TYPE ,
	UNKNOWN_AUTH_TYPE 
} TAuthorisationType ;

#define MAX_PRICE_ELEMENTS 10 

typedef enum TPriceSignElementType 
{
	UNKNOWN_PS_EL_TYPE = 0 , 
	FIXED_PRICE_PS_EL_TYPE , 
	GRADE_LEVEL1_PS_EL_TYPE ,
	GRADE_LEVEL2_PS_EL_TYPE ,
	HOSE_LEVEL1_PS_EL_TYPE ,
	HOSE_LEVEL2_PS_EL_TYPE ,
	LAST_PS_EL_TYPE 
} TPriceSignElementType ;


#define SINK_DEFAULT_EVENTS  ( SINK_MINIMAL_PUMP_EVENT | SINK_FULL_PUMP_EVENT | SINK_DELIVERY_EVENT | SINK_DB_TANK_STATUS_EVENT | SINK_DB_HOSE_ETOTS_EVENT | SINK_CARD_READ_EVENT ) 

#define SINK_MINIMAL_PUMP_EVENT		0x0000001
#define SINK_FULL_PUMP_EVENT		0x0000002 
#define SINK_DELIVERY_EVENT			0x0000004
#define SINK_SERVER_EVENT			0x0000008
#define SINK_CLIENT_EVENT			0x0000010
#define SINK_ZERO_DELIVERY_EVENT	0x0000020
#define SINK_CARD_READ_EVENT		0x0000040
#define SINK_ZB_STATUS_EVENT		0x0000080
#define SINK_LOG_EVENT_EVENT		0x0000100
#define SINK_SALE_ITEM_EVENT		0x0000200
#define SINK_DB_HOSE_ETOTS_EVENT    0x0000400
#define SINK_DB_TANK_STATUS_EVENT	0x0000800
#define SINK_DB_LOG_EVENT			0x0001000
#define SINK_DB_LOG_DEL_EVENT		0x0002000
#define SINK_DB_CLEAR_DEL_EVENT		0x0004000
#define SINK_DB_STACK_DEL_EVENT		0x0008000
#define SINK_DB_ATT_LOGON_EVENT		0x0010000
#define SINK_DB_ATT_LOGOFF_EVENT	0x0020000
#define SINK_EZODO_EVENT			0x0040000
#define SINK_EZTERM_EVENT			0x0080000

