# Generated by Django 4.2.7 on 2023-12-31 03:30

from django.db import migrations, models
import django.db.models.deletion


class Migration(migrations.Migration):

    dependencies = [
        ('category', '0001_initial'),
        ('books', '0001_initial'),
    ]

    operations = [
        migrations.AddField(
            model_name='book',
            name='category',
            field=models.ForeignKey(blank=True, null=True, on_delete=django.db.models.deletion.CASCADE, to='category.category'),
        ),
        migrations.AlterField(
            model_name='book',
            name='image',
            field=models.ImageField(default='', upload_to='books/media/uploads'),
        ),
    ]