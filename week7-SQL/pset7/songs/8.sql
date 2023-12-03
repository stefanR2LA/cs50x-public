--Write SQL query that lists the names of the songs that fgeature other artists (feat)

SELECT name FROM songs
WHERE name LIKE '%feat.%';
