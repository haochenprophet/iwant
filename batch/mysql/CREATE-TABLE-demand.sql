CREATE TABLE demand (
		id			BIGINT		NOT NULL AUTO_INCREMENT,
		who			TEXT		NOT NULL,
		type		TEXT		NOT NULL,
		object		TEXT		NOT NULL, 
		location 	TEXT		NOT NULL, 
		price		INT			NOT NULL,
		count 		INT			NOT NULL,
		start_date 	DATETIME	NOT NULL,
		end_date	DATETIME	NOT NULL,
		submit_time	DATETIME	NOT NULL,
		image 		LONGBLOB	NULL,
		remark		TEXT		NULL,
		PRIMARY KEY (id)
	);
