Action()
{
	
	lr_start_transaction("Homepage");

	lr_think_time(10);
	
	// Added first comment.
	// Added second comment.	

	lr_end_transaction("Homepage", LR_AUTO);

	return 0;
}
