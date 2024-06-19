-- Write a solution to find the customer_number for the customer that has placed the largest nuber of order --
SELECT customer_number
FROM orders
GROUP BY customer_number
ORDER BY COUNT(order_number) DESC
LIMIT 1;
