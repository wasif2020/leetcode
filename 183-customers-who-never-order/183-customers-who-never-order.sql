# Write your MySQL query statement below
select name as 'Customers' FROM Customers where id not in(select customerId from Orders);