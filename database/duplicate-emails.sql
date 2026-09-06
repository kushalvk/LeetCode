# Write your MySQL query statement below
select email from Person Group by email having count(email) > 1;