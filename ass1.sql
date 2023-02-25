SELECT s.name AS Salesman, c.cust_name AS Customer, s.city
FROM salesman s
INNER JOIN customer c ON s.city = c.city
WHERE s.salesman_id = c.salesman_id;
