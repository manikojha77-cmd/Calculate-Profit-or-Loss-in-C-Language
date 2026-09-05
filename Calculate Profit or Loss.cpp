# include <stdio.h>
int main()
{
	float profit,loss,cost_price,sales_price;
	printf("Enter your cost of price:");
	scanf("%f",& cost_price);
	printf("Enter your sales price:");
	scanf("%f",& sales_price);
	if(sales_price>cost_price)
	{
	profit=sales_price-cost_price;
	printf("Total profit:%0.2f",profit);
	}
	else if(sales_price<cost_price)
	{
	loss=cost_price-sales_price;
	printf("Total loss:%0.2f",loss);
	}
	else
	printf("No profit and loss");
	return 0;
}
