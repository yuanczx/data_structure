all: 
	cd stack && $(MAKE)
	cd sort && $(MAKE)

.PHONY: clean

clean:
	@find "." -wholename "*/out/*" -exec rm {} \;
