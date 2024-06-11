SELECT Weather.id AS Id
FROM Weather
JOIN Weather w2 ON datediff(Weather.RecordDate, w2.RecordDate) = 1
WHERE Weather.Temperature > w2.Temperature