Select name
From Salesperson
Where sales_id Not In (Select sales_id
                       From Orders
                       Where com_id In (Select com_id
                                        From Company
                                        Where name = 'RED'));