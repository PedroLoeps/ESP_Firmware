#pragma once

/*
 * @brief Event handler registered to receive MQTT events
 *
 *  This function is called by the MQTT client event loop.
 *
 * @param handler_args user data registered to the event.
 * @param base Event base for the handler(always MQTT Base in this example).
 * @param event_id The id for the received event.
 * @param event_data The data for the event, esp_mqtt_event_handle_t.
 */

//Initiate MQTT client
void mqtt_client_init(void);

//Send data to specified topic
void mqtt_send_data(const char * topic, const char * data);

//Check if any error ocurred when initiating the client or sending data
int check_mqtt(void);