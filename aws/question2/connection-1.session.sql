
use sampledb;

create table customers(
    ride_no int primary key auto_increment,
    driver_name varchar(20),
    customer_name varchar(20),
    passenger_count int
)

select * from customers;